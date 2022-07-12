#include <stdio.h>

int main() {
    int a,b,c,x,y,z;
    int m1[3][5],colu[5];
  
    for(a=0;a<3;a++){
        for(b=0;b<5;b++){
            printf("Digite na posicao [%d][%d]:  ",a,b);
            scanf("%d",&m1[a][b]);
        }
    }
  
    for(x=0;x<5;x++){
        for(z=0;z<3;z++){
            colu[x]=colu[x]+m1[z][x];
        }
    }
    for(y=0;y<5;y++){
        printf("%d   ",colu[y]);
    }
}
