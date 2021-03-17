#include <stdio.h>
#include <locale.h>
#include <windows.h>
//endereço de memória como parâmentro da fn com valor
void incrementa(int* valor) {
  printf("Antes de incrementar fn incrementar.\n");
  printf("O contador vale %d\n", (*valor));//valor
  printf("O endereço de mémoria é %d\n", valor);//endereço 

  printf("Depois de incrementar fn incrementar..\n");
  printf("O contador vale %d\n", ++(*valor));
}

int main() {

  /*******************************Codificicação  UTF pra TERMINAL ***************************************/
  // Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();

  // Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);
 /*********************************************************************/
 
  int contador = 10;

  printf("Antes de incrementar.\n");
  printf("O contador vale %d\n", contador);
  printf("O endereço de mémoria é %d\n\n", &contador);

  incrementa(&contador);

  printf("\n\nDepois incrementar\n");
  printf("O contador vale %d\n", contador);


 // Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
  
  return 0;
}