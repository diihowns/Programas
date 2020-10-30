# include  <stdio.h>  // defiune entrada e saida
# include  <stdlib.h>  // funções básicas do sistemas
# include  <locale.h> // biblioteca de iidiomas




int  main ( int argc, char * argv []) {
	setlocale (LC_ALL, " português " );
	

  struct rep
  
  {
  
  char nome[50];
  char mat[30];
  char empresa[40];
  char centro[40];
  
 };
  

  struct rep rep1;
  
  {
  
  system("color A");
  printf("Por favor coloque o nome do representante:");
  gets(rep1.nome);
  
  printf("Coloque o numero de matricula do representante: ");
  gets(rep1.mat);
  
  printf("Digite o nome da empresa que o representante ira atuar :");
  gets(rep1.empresa);
  
  printf("Digite o centro que o representante vai fazer parte :");
  gets(rep1.centro);
  
  system("cls");
  system("color C");
  printf("Representante cadastrado");  
  printf("\n Bem vindo, %s \n guarde o seu numero de matricula : %s\n pois ira atuar na empresa %s\n e seus gastos iram para o centro %s\n", rep1.nome, rep1.mat, rep1.empresa, rep1.centro);


};
 



 return 0;    
}
      
