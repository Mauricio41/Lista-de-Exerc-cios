#include <stdio.h>

int main(){
  char nome[50][100];
	int i, ax=0, minimo[50], atual[50], repostas[50]; 
	
	printf("digite o nome, estoque minimo e estoque atual de 50 plantas:\n");
	for(i=0;i<50;i++){
		printf("qual nome da planta : ");
		scanf("%s", &nome[i]);	
		printf("qual estoque minimo : ");
		scanf("%d", &minimo[i]);	
		printf("qual estoque atual : ");
		scanf("%d", &atual[i]);	
	}
	
	printf("as plantas que necessitam serem repostas e : \n");
	for(i=0;i<50;i++){
		repostas[ax]=atual[i]-minimo[i]; ax++;
		if(repostas[ax]<0){
			fflush(stdin);
			printf("%s necessita ser reposto\n",nome[i]);
		}else if(repostas[ax]=0){
			printf("%s quase precisando ser resposto", nome[i]);
		}
	}
