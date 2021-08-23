#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h> 



void media(float med)
{

 if(med<49)
  { 
    printf("\nSeu conceito e:D\n");}
  
    if((med>49)&&(med<69))
    {
    printf("\nSeu conceito e:C\n");
    }
  
    if((med>69)&&(med<89))
    { 
    printf("\nSeu conceito e:B\n");
    }

    if((med>89)&&(med<100))
    { 
    printf("\nSeu conceito e:A\n");
    }

 
 
}
 int main()
 { 
float med;

 
 printf("Informe a sua media ");
 scanf("%f",&med);

media(med);

}
