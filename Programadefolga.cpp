#include <stdio.h> // defiune entrada e saida 
#include <stdlib.h> // fun��es b�sicas do sistemas 
#include <locale.h>// biblioteca de iidiomas 




int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[10]; 
	int folga;
	
	
	
	
     system("color A");
     
	 printf("\n********************************\n");
	 printf("\nSistema intranet\n");
	 printf("\n********************************\n");
	 
	 printf("Digite o seu nome:");
	 
	 scanf("%s", &nome);
	 printf("\nBem vindo %s\n", &nome);
    system("pause");
    system("cls");
    printf("\nEscolha a op��o para a sua folga:\n");   
   
    printf("\n********************************\n");
    printf("\nDias de folga dispon�veis\n");
    printf("\n********************************\n");  
    printf("\n1 - DOMINGO\n");
    printf("\n2 - Sab�do\n");
    scanf("%d", &folga);
       
	   switch(folga)
     {
     	case 1:
     	system("cls");
		printf("\n Aproveite a folga domingo\n");
     	break;
     	
     	case 2:
		system("cls");
		printf("\n Aproveite a folga sab�do\n");
        break;
        
        
		default:
        system("cls");
		system("color 4");
		printf("\nComando inval�do !!! \n");
     		
     	
	  } 
    
       system("pause");
	   return 0;  
 
}




 
  
