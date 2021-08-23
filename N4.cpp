#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>

struct registro
{               
	char nome[40];
	int matricula;
	float salario;	
};

float media(float comissao[3][4], int i)
{                         
	int x;
	float calcmedia=0,soma=0;
	
	for(x=0;x<4;x++)
	{
		soma=soma+comissao[i][x];	
	}
		
	calcmedia= soma/4;
	
	return calcmedia;
}

int main ()
{
	struct registro r1[3];
	float comissao[3][4],comissaoMedia[3],soma,maiorsalario=0,maiormedia;     
	int i,x,op=0,aux1,aux2;

	for(i=0;i<3;i++)
	{
		printf("\nDigite o nome do funcionario:");
		fflush(stdin);
		gets(r1[i].nome);
		fflush(stdin);
		printf("Digite a matricula do funcionario:");
		scanf("%d",&r1[i].matricula);
		printf("Digite o salario do funcionario:");
		scanf("%f",&r1[i].salario);
		
		for(x=0;x<4;x++)
		{
			printf("\nDigite o valor da comissao %d:",x+1);
			scanf("%f",&comissao[i][x]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		comissaoMedia[i]= media(comissao,i);
	}
	
	for(i=0;i<3;i++)
	{
		printf("\nA media da comissao de cada funcionario foi: %f",comissaoMedia[i]);
	}
	getch();
	system("cls");
	
	while(op!=4)
	{
		system ("color 8e");
		printf("***************MENU***************");
		printf("\n1-Mostrar nome do funcionario com maior salario");
		printf("\n2-Mostrar a soma das medias salariais de todos os funcionarios");
		printf("\n3-Mostrar o nome do funcionario com maior media de comissao nos 4 primeiros meses");
		printf("\n4-Sair");
		printf("\nDigite a opcao:");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
				{
					
					for(i=0;i<3;i++)
					{
						
						maiorsalario = r1[0].salario;
						
						if(r1[i].salario>maiorsalario)
						{
							maiorsalario=r1[i].salario;
							aux1=i;
						}
					}
					printf("\nFuncionario com maior salario: %s",r1[aux1].nome);
					getch();
					system("cls");
					break;
				}
			case 2:
			{
				for(i=0;i<3;i++)
				{
					soma= soma+comissaoMedia[i];
				}
				printf("A soma das medias e: %f",soma);
				getch();
				system("cls");
				break;
			}
			case 3:
			{
				for(i=0;i<3;i++)
				{
					if(i==0)
						{
							maiormedia= comissaoMedia[i];
						}
							if(comissaoMedia[i]>maiormedia)
							{
								maiormedia=comissaoMedia[i];
								aux2=i;
							}
				}
				printf("\nFuncionario com maior media salarial: %s",r1[aux2].nome);
				getch();
				system("cls");		
			break;
			}	
			case 4:
			{
				op=4;
				break;	
			}
			default:
			{
				printf("\nOpcao Invalida !");
				getch();
				system("cls");
				break;
			}	
		}
	}
	
	getch();
	return 0;
}
