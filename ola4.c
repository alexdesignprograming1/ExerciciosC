#include <stdio.h>

int main() {

  // int valores[5];

  // for(int i = 0; i < 5; i++) {
  //   printf("Informe o %d/5 valor: ", (i+1));
  //   scanf("%d", &valores[i]);
  // }
  
  // printf("Os valores informados foram: \n");
  // for(int i = 0; i < 5; i++){
  //   printf("%d\n", valores[i]);
  // }

  // printf("%p %d\n", &valores[0], valores[0]);
  // printf("%p %d\n", &valores[1], valores[1]);
  // printf("%p %d\n", &valores[2], valores[2]);
  // printf("%p %d\n", &valores[3], valores[3]);
  // printf("%p %d\n", &valores[4], valores[4]);
  // printf("%p %d\n", valores, valores[0]);

  /*
  * int = 4 bytes
  * bit 0 / 1
  * byte 0000 0001
  * 0000 0000 0000 0000 0000 0000 0000 0001
  * 0000 0000 0000 0000 0000 0000 0000 0010
  */
  int valores[5] = {1,2,3,4,5};

  for(int i = 0; i < 5; i++ ){
    printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
  }
  printf("O valores [0] vale %d e endereco de memoria e %p\n", valores[0], valores[0]);
  printf("O *(valores) vale %d e endereco de memoria e %p\n", *(valores), *(valores));
  
  printf("O *(valores+1) vale %d e endereco de memoria e %p\n", *(valores+1), *(valores+1));
  printf("O *(valores+2) vale %d e endereco de memoria e %p\n", *(valores+2), *(valores+2));
  printf("O *(valores+3) vale %d e endereco de memoria e %p\n", *(valores+3), *(valores+3));
  printf("O *(valores+4) vale %d e endereco de memoria e %p\n", *(valores+4), *(valores+4));

  return 0;
}

