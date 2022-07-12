#include <stdio.h>

int main() {
    int z,x,a,b,m,n,w,y,a1,b1;
    int m1[3][3],m2[3][3],sub[3][3];
   
    printf("\tSoma de Vetores:\n");
    printf("\n\nDigite o vetor A:\n");
    for(z=0;z<3;z++){
        for(x=0;x<3;x++){
            printf("posição [%d][%d]:  ",z,x);
            scanf("%d",&m1[z][x]);
        }
    }
    printf("\n\nDigite o vetor B:\n");
    for(m=0;m<3;m++){
        for(n=0;n<3;n++){
            printf("posição [%d][%d]:  ",m,n);
            scanf("%d",&m2[m][n]);
        }
    }
   
   
    for(a=0;a<3;a++){
        for(b=0;b<3;b++){
            sub[a][b]=(m1[a][b]-m2[a][b]);
        }
    }
    printf("\n\nVetor 1:\n");
    for(m=0;m<3;m++){
        for(n=0;n<1;n++){
            printf("[%d    %d    %d]\n",m1[m][n],m1[m][n+1],m1[m][n+2]);
        }
    }
    printf("\n\nVetor 2:\n");
    for(w=0;w<3;w++){
        for(y=0;y<1;y++){
            printf("[%d    %d    %d]\n",m2[w][y],m2[w][y+1],m2[w][y+2]);
        }
    }
    printf("\n\nSubtracao dos vetores:\n");
    for(a1=0;a1<3;a1++){
        for(b1=0;b1<1;b1++){
            printf("[%d    %d    %d]\n",sub[a1][b1],sub[a1][b1+1],sub[a1][b1+2]);
        }
    }
}
