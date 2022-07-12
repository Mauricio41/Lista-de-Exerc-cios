#include <stdio.h>

int main() {
    int z,x,a,b,m,n,w,y,a1,b1;
    float m1[2][2],m2[2][2],soma[2][2];
   
    printf("\tSoma de Vetores:\n");
    printf("\n\nDigite o vetor A:\n");
    for(z=0;z<2;z++){
        for(x=0;x<2;x++){
            printf("posição [%d][%d]:  ",z,x);
            scanf("%f",&m1[z][x]);
        }
    }
    printf("\n\nDigite o vetor B:\n");
    for(m=0;m<2;m++){
        for(n=0;n<2;n++){
            printf("posição [%d][%d]:  ",m,n);
            scanf("%f",&m2[m][n]);
        }
    }
   
   
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            soma[a][b]=(m1[a][b]+m1[a][b]);
        }
    }
    printf("\n\nVetor 1:\n");
    for(m=0;m<3;m++){
        for(n=0;n<1;n++){
            printf("[%.1f    %.1f]\n",m1[m][n],m1[m][n+1]);
        }
    }
    printf("\n\nVetor 2:\n");
    for(w=0;w<2;w++){
        for(y=0;y<1;y++){
            printf("[%.1f    %.1f]\n",m2[w][y],m2[w][y+1]);
        }
    }
    printf("\n\nSoma dos vetores:\n");
    for(a1=0;a1<2;a1++){
        for(b1=0;b1<1;b1++){
            printf("[%.1f    %.1f]\n",soma[a1][b1],soma[a1][b1+1]);
        }
    }
}
