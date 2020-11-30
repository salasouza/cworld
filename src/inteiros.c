#include<stdio.h>
#include<conio.h>

int main(void)
{
  int i;

  int notas[5] = {1,2,3,4,5};

  // declarando e inicializando o vetor notas
  
  printf("Exibindo os Valores do Vetor \n\n");
  
  for( i = 0 ; i <= 3; i++)
  {
    printf("notas[%d] = %.1f",i, notas[i]);
  }
  
  getch();
  return 0;
}
