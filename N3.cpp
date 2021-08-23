

#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h> 

void soma (float num1, float num2, float som){
	
	som=num1+num2;
	printf("%.2f", som);
}

void multiplicacao (float num1, float num2, float mult)
{
    printf("%.2f", mult);
	mult=(num1*num2);
}

void divisao (float num1, float num2, float div)

{
    printf("%.2f", div);
	div=(num1/num2);
}

int main ()
{
	float num1, num2;
	int op;
	float som,mult,div;
while(op!=4)
{
system("color 8b"); 
 printf("\n***************MENU***************");
 printf("\n 1) SOMA");
 printf("\n 2) PRODUTO");
 printf("\n 3) QUOCIENTE");
 printf("\n 4) SAIR");
 printf("\nDigite a opcao desejada: ");
 scanf("%d",&op);
 
 
 if (op==1)
{ 
system("color e1");
printf("\nInforme um valor");
scanf("%f", &num1);
printf("\nInforme um valor");
scanf("%f", &num2);

soma(num1,num2,som);
}
 
 if (op==2)

{ 
printf("\nInforme um valor");
scanf("%f", &num1);
printf("\nInforme um valor");
scanf("%f", &num2);

multiplicacao(num1,num2,mult);
}

if (op==3)
{ 
printf("\nInforme um valor");
scanf("%f", &num1);
printf("\nInforme um valor");
scanf("%f", &num2);

divisao(num1,num2,div);
}


}

