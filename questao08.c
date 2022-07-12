#include <stdio.h>
#include <stdlib.h>

int main(){
    int manic=0, serv, servicos[5][3], x, y, soma;

    for (x=0; x<5; x++) {
        for (y=0; y<3; y++)
            servicos[x][y]=0;
    }
    do {
        printf("Informe a manicure <1-5>:\n");
        scanf("%d", &manic);
        printf("Informe o servico <1-pe 2-mao 3-podologia>:\n");
        scanf("%d", &serv);
        if (manic >= 1 && manic <=5) {
            if (serv >= 1 && serv <= 3)
                servicos[manic-1][serv-1]++;
            else
                printf("Servico invalido!\n");
        }else
            printf("Manicure invalida!\n");
    } while (manic != 0);
        printf("\nFaturamento das manicures:\n");
        for (x=0; x<5; x++) {
            soma = servicos[x][0] * 10;
            soma += servicos[x][1] * 15;
            soma += servicos[x][2] * 30;
            printf("\nManicure %d: %d\n", x+1, soma);
        }
}
