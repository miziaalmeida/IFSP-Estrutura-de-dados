#include <stdio.h>

int main() {

    int i = 0;
    int meta = 1000000;
    int acessoTotal = 0;
    int dias;
    int acessoDia;

 
    printf("Quantos dias? ");
    scanf("%d", &dias);
 
    while(i <= dias) {
          scanf("%d", &acessoDia);
        if(meta > acessoTotal) {
            acessoTotal += acessoDia;
            i++;
        } else if (meta <= acessoTotal) {
            break;
        }
    }
    printf("%d\n", i);
    return 0;
}