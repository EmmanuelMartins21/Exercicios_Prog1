#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define H 500

struct habitantes 
{
	char nome [50];
	float salario;
	int numfilhos, sexo;

};

void alterasalario (struct habitantes *h){
	int i;
	
	for (i=0;i<H;i++){
		h[i].salario = h[i].salario + 50.0;
	}	
}

float mediasalario (struct habitantes *h){
	
	int i, cont=0;
	float media=0;
	
	for (i=0;i<H;i++){
		if ((h[i].sexo == 1) && (h[i].numfilhos >=2)){
			media = media + h[i].salario;
			cont++;
		}
	}	
	return (media/cont);
}

void contfilhos (struct habitantes *h){
	
	int i, contfilhos=0;
	
	for (i=0;i<H;i++){
		if (h[i].numfilhos == 0){
			contfilhos++;
		}
	}
	
	printf ("\nSem filhos: %d", contfilhos);
}

void cadastrohab (struct habitantes *h, int *conthab){
	
	if (*conthab >= H){
		printf ("Quantidade total cadastrada \n");
	}
	else{
		printf ("\n");
		printf ("Digite o nome: ");
		fflush (stdin);
		gets (h[*conthab].nome);
		fflush (stdin);
		printf ("Digite o sexo [1-M | 2-F]: ");
		scanf ("%d", &h[*conthab].sexo);
		fflush (stdin);
		printf ("Digite o salario: ");
		scanf ("%f", &h[*conthab].salario);
		printf ("Digite o numero de filhos: ");
		scanf ("%d", &h[*conthab].numfilhos);
		
		*conthab++;	
	}
}

int main ()
{
	
	struct habitantes h[H]; 
	int i, op;
	float media;
	
	
	for (i=0;i<H;i++)
	{
		
		printf ("\n");
		printf ("Digite o nome: ");
		fflush (stdin);
		gets (h[i].nome);
		fflush (stdin);
		printf ("Digite o sexo [1-M | 2-F]: ");
		scanf ("%d", &h[i].sexo);
		fflush (stdin);
		printf ("Digite o salario: ");
		scanf ("%f", &h[i].salario);
		printf ("Digite o numero de filhos: ");
		scanf ("%d", &h[i].numfilhos);		
	}
	
	alterasalario (h);
	media = mediasalario (h);
	
	system ("color 7f");
	
	printf ("\n A media e: %.2f", media);
	
	contfilhos (h);
	
	
	system ("pause");
	
	
	return 0;
}
