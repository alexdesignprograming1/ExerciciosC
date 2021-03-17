 #include <stdio.h>

 int main() {
  // FILE *arq;
  // char nome[100], *resultado;

  // arq = fopen("arquivo.txt", "r");

  // if(arq){
  //   while(!feof(arq)){//feof - File End of File
  //     resultado = fgets(nome, 100, arq);
  //     printf("Resultado: %d\n", resultado);
  //     if(resultado){
  //       printf("%s\n", nome);
  //     }
  //   }
  // }else {
  //   printf("Não achei o o arquivo");
  // }
  // fclose(arq);

  FILE *arq; 
  int num, resultado, soma = 0;

  arq = fopen("arquivo.txt", "r");

  if(arq){
    while(!feof(arq)){
      resultado = fscanf(arq, "%d", &num);
      printf("Resultado: %d\n", resultado);
      if(resultado == 1){
        soma = soma + num;
      }
    }
  }else{
    printf("Esse arquivo não exisite!");
  }
  printf("A Soma dos numeros encontrados e %d", soma);
  fclose(arq);

  return 0;
 }