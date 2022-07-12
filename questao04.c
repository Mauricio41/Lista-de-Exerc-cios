#include <stdio.h>

int main() {
    int z,x,a,b,m,n,w,y,a1,b1;
    int m1[4][5],soma;
   
    printf("\tSoma do Vetor:\n");
    printf("\n\nDigite o vetor A:\n");
    for(z=0;z<4;z++){
        for(x=0;x<5;x++){
            printf("posição [%d][%d]:  ",z,x);
            scanf("%d",&m1[z][x]);
        }
    }
    
    for(a=0;a<4;a++){
        for(b=0;b<5;b++){
            soma=soma+m1[a][b];
        }
    }
    printf("\n\nSoma do vetor é %d: ",soma);
}
