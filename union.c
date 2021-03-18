#include <stdio.h>
#include <string.h>

// union pessoa {
//   char nome[50]; // 1 char = 1 byte -> 1 * 100 = 100 bytes
//   int idade; // 4  bytes -> total de 104 bytes
// };

union numeros {
  int num1, num2, num3, num4, num5;
}n;


int main() {

  // int numero = 42;
  // float nota = 7;
  // char letra = 'a';
  // double outraNota = 19.4;
  // char nome[50] = "Ola mundo";

  // printf("A variavel 'numero' tem valor %d e ocupa %ld bytes em memoria\n", numero, sizeof(numero));
  // printf("A variavel 'nota' tem valor %.2f e ocupa %ld bytes em memoria\n", nota, sizeof(nota));
  // printf("A variavel 'letra' tem valor %c e ocupa %ld bytes em memoria\n", letra, sizeof(letra));
  // printf("A variavel 'outraNota' tem valor %.2f e ocupa %ld bytes em memoria\n", outraNota, sizeof(outraNota));
  // printf("A variavel 'outraNota' tem valor %s e ocupa %ld bytes em memoria\n", nome, sizeof(outraNota));

  // union pessoa pes;

  // strcpy(pes.nome, "Alex Silva");
  // printf("Dados de %s\n", pes.nome);

  // pes.idade = 24;
  // printf("Ele tem %d anos\n", pes.idade);

  // printf("A variavel 'pes' esta ocupando %ld bytes em memoria.", sizeof(pes));
  
  int soma = 0;
  
  n.num1 = 1;
  soma = soma + n.num1;
  printf("O valor de Num1 e %d\n", n.num1);

  n.num2 = 2;
  soma = soma + n.num2;
  printf("O valor de Num2 e %d\n", n.num2);

  n.num1 = 3;
  soma = soma + n.num3;
  printf("O valor de Num3 e %d\n", n.num3);

  n.num1 = 4;
  soma = soma + n.num4;
  printf("O valor de Num4 e %d\n", n.num4);

  n.num1 = 5;
  soma = soma + n.num5;
  printf("O valor de Num5 e %d\n", n.num5);

  printf("=====================================================\n");

  printf("'n' esta ocupando %ld bytes em memoria\n", sizeof(n));
  printf("Soma = %d\n", soma);
  printf("Memoria total ocupada %ld ", (sizeof(n) + sizeof(soma)));
  
  return 0;

}