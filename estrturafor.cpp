# include  <stdio.h>  // defiune entrada e saida
# include  <stdlib.h>  // funções básicas do sistemas
# include  <locale.h> // biblioteca de iidiomas




int  main ( int argc, char * argv []) {
	setlocale (LC_ALL, " português " );
	
   float nota, total, media;
   int cont;



    total=0; 



   for (cont=1;cont<=4;cont++)
   
   {
   	system("color A");
   	printf("Poderia a nota ? :");
   	scanf("%f", &nota);
   	total = total + nota;
   	
   }
    
  
  media = total /4;
  printf("O resultado da média é :%f\n", media);
       


 return  0 ;
  
  
  }
