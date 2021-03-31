#include <stdio.h>

int fatorialCalc(int x)
{
	int f = 1;
	int i;

    for(i=x; i>1; i--) {
        f *= i;
    }
    return f;
}

int main() {
    int a, b, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("%d\n", fatorialCalc(a));
    printf("%d\n", fatorialCalc(b));

    soma = fatorialCalc(a) + fatorialCalc(b);

    printf("%d\n", soma);

    return 0;
}
