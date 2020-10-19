#include <stdio.h> // defiune entrada e saida 
#include <stdlib.h> // funções básicas do sistemas 
#include <locale.h>// biblioteca de iidiomas 




int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
float nota, media, total;
int cont;

   total=0;
     
       
       
       for (cont=1;cont<=4;cont++)
       
       {
       	
       	printf("Digite a nota");
       	scanf("%f", &nota);
       	total = total + nota;
       	
	   }
media = total /4;
printf("Resultado:%.f\n", media);
          
    
       


 return 0;
  
  
  }
