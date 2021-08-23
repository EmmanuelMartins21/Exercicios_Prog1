#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

# define TAM 15

struct cadastro{
	
	int cod,idade,pontuacao,percentual;
	char nome[50];
};

void testePerc(struct cadastro *func)
{ 
	int i;
	for(i=0;i<TAM;i++){
		if(func[i].percentual < 60){
			func[i].pontuacao=func[i].pontuacao - 1;
			printf("Paciente %s, Controlado\n",func[i].nome);
		}	
	}
}


void media(struct cadastro *func){
	int i,cont=0;
	float mediaidade=0.0,somaidade=0.0;
	for(i=0;i<TAM;i++){
		if(func[i].percentual>70){
			somaidade=somaidade+func[i].idade;
			cont=cont+1;
			printf("O nome dos paciente com percentual de gordura maior que 70 e: %s \n",func[i].nome);
		
		}
	}
	
	mediaidade=somaidade/(float)cont;
	printf("A media de idades dos pacientes com percentual de gordura maior que 70 e: %.2f \n\n", mediaidade);
}




int main(){
	
	struct cadastro func[TAM];
	int i,j,aux,aux2;
	char aux1[50];
	for(i=0;i<TAM;i++){
		printf("Informe o codigo:\n");
		scanf("%d",&func[i].cod);
		printf("Informe seu nome:\n");
		fflush(stdin);
		gets(func[i].nome);
		fflush(stdin);
		printf("Informe sua idade:\n");
		scanf("%d",&func[i].idade);
		printf("Informe sua pontuação(0 a 30):\n");
		scanf("%d",&func[i].pontuacao);
		printf("Informe seu percentual de gordura(0 a 100):\n");
		scanf("%d",&func[i].percentual);
		system("cls");
		
		
	
	}
	testePerc (func);
	media (func);
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM-1;j++){
			if(func[j].pontuacao<func[j+1].pontuacao){
				aux=func[j].pontuacao;
				func[j].pontuacao=func[j+1].pontuacao;     
				func[j+1].pontuacao=aux;
			
				strcpy(aux1,func[j].nome);
				strcpy(func[j].nome,func[j+1].nome);
				strcpy(func[j+1].nome,aux1);
				
				
				aux2=func[j].cod;
				func[j].cod=func[j+1].cod;
				func[j+1].cod=aux2;
			}
			
		}
		
		for(i=0;i<TAM;i++){
			
			system ("color 3d");
			printf("%s, %d, %d \n\n",func[i].nome,func[i].pontuacao,func[i].cod);			
			
		}
		
	}
		
	}
