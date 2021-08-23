#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define TAM 2

struct aluno{
	
	char nome[25];
	int id ;
	int matr;
		
};
 
int main()
{
 struct aluno al[TAM] ;
 int i;
 
  for(i=0;i<TAM;i++)
 {
 
   printf("Informe seu nome");
   scanf("%s",&al[i].nome);
   printf("\n Informe sua idade");
   scanf("%d",&al[i].id);
   printf("\n Informe seu numero de matricula:\n ");
   scanf("%d",&al[i].matr);
 }
 system ("cls");
 system ("color 3d");
 for (i=0;i<TAM;i++)
   if(al[i].id<18)
   {
 	printf("O nome do aluno e: %s",al[i].nome);
 	printf("\n A idade do aluno e:%d",al[i].id);
 	printf("\n O numero de matricula e:%d ",al[i].matr);
 	
   }
 
}
