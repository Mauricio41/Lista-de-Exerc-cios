#include <stdio.h>

int main() {
    int z,x,a,b,m,n,w,y;
   float m1[3][4],m2[3][4];
   printf("digite uma matriz de 3x4:\n");
   for(z=0;z<3;z++){
       for(x=0;x<4;x++){
           printf("posição [%d][%d]:  ",z,x);
           scanf("%f",&m1[z][x]);
       }
   }
   for(a=0;a<3;a++){
       for(b=0;b<4;b++){
           m2[a][b]=(m1[a][b]*3);
       }
   }
   printf("\n\n\tVetor :\n");
   for(m=0;m<3;m++){
       for(n=0;n<1;n++){
           printf("[%.1f    %.1f    %.1f]\n",m1[m][n],m1[m][n+1],m1[m][n+2]);
       }
   }
   printf("\n\n\tVetor x3:\n");
   for(w=0;w<3;w++){
       for(y=0;y<1;y++){
           printf("[%.1f    %.1f    %.1f]\n",m2[w][y],m2[w][y+1],m2[w][y+2]);
       }
   }
}
