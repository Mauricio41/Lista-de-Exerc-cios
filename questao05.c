#include <stdio.h>

int main() {
    int z,x,a,b,m,n,w,y,a1,b1,c;
    int m1[3][5],soma[3];
   
    printf("\tSoma do Vetor:\n");
    printf("\n\nDigite o vetor A:\n");
    for(z=0;z<3;z++){
        for(x=0;x<5;x++){
            printf("posição [%d][%d]:  ",z,x);
            scanf("%d",&m1[z][x]);
        }
    }
    
    for(a=0;a<3;a++){
        for(b=0;b<5;b++){
                soma[a]=soma[a]+m1[a][b];
        }
    }
    printf("\nA soma linear das matrizes e:\n");
    printf("%d    %d    %d",soma[0],soma[1],soma[2]);
    
}
