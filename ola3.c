#include <stdio.h>
#include <locale.h>

int main() {

  //setlocale(LC_ALL, "");

  //declarando
  // int n; //Variável que guarda sua valor na memória

  // //declarando
  // int* p;//Ponteiro é um valor que aponta para um endereço de memória;
  
  // printf("Informe um número: ");
  // scanf("%d", &n);

  // p = &n;

  // printf("O número informado foi: %d\n", n);
  // printf("O endereço de memória:  %d\n", &n);
  // printf("O endereço do ponteiro: %p\n", p);

  int valores[5];

  for(int i = 0; i > 5; i++) {
    printf("Informe o %d/5 valor: ", (i+1));
    scanf("%d", &valores[i]);
  }
  
  printf("Os valores informados foram: \n");
  for(int i = 0; i < 5; i++){
    printf("%d\n", valores[i]);
  }

  printf("%p %d\n", &valores[0], valores[0]);
  printf("%p %d\n", valores, valores[0]);

  return 0;
}

