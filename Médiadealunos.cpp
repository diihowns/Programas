#include <stdio.h> // defiune entrada e saida 
#include <stdlib.h> // fun��es b�sicas do sistemas 
#include <locale.h>// biblioteca de iidiomas 




int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
int contador;
float nota, media ,total;

   total = 0;
   contador = 1;


   while(contador<=4)
   
   {
   	
   	printf("Digite a nota: ");
   	scanf("%f", &nota);
   	total = total + nota;
   	contador++;
   	
   	
   }
 media = total /4;
 printf("O resultado da nota � igual a %f:", media);


 return 0;
  
  
  }
