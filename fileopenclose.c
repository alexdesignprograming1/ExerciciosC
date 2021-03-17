#include <stdio.h>

int main() {

  // FILE *arq;

  // //fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
  // //w - abrir o arquivo para escrita (se o arquivo já existir, séra sobrescrito com um novo zerado)
  // //r - abrir o arquivo para leitura (não podemos escrever no arquivo)
  // //wa - abrir o arquivo para adição de conteúdo (se o arquivo já exisitir, o conteúdo séra adicionado nas linhas abaixo)
  // arq = fopen("arquivo.txt", "w");

  // //sempre que a gente finalizar a manipulação de um arquivo, devemos fechá-lo
  // fclose(arq);

  FILE *arq;
  char c;

  arq = fopen("arquivo.txt", "r");

  if(arq){
    while((c = gets(arq)) != EOF){
      printf("%c", &c);
    }
  }else{
    printf("Não achei o arquivo!");
  }

  return 0;
}