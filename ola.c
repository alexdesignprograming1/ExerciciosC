// #include <stdio.h>
// #include <locale.h>
// #include <windows.h>

// int main () {

//   /*******************************Codificicação  UTF pra TERMINAL ***************************************/
//   // Define o valor das páginas de código UTF8 e default do Windows
//   UINT CPAGE_UTF8 = 65001;
//   UINT CPAGE_DEFAULT = GetConsoleOutputCP();

//   // Define codificação como sendo UTF-8
//   SetConsoleOutputCP(CPAGE_UTF8);
//  /*********************************************************************/

//   float x, y; 
//   int op;

//   printf("== CALCULADORA ==\n");
//   printf("Digite o primeiro número: ");
//   scanf("%f", &x);
//   printf("Digite o segundo número: ");
//   scanf("%f", &y);
//   printf("Escolha uma das opções abaixo: ");

//   system("cls");

//   printf("1 - Soma\n");
//   printf("2 - Subtração\n");
//   printf("3 - Divisão\n");
//   printf("4 - Multiplicação\n\n");

//   printf("Digite o número da operação desejada: ");
//   scanf("%i", &op);
  
//   switch (op)
//   {
//   case 1:
//     printf("Opção Selecionada: 1. SOMA\n");
//     printf("A soma dos dois números é: %.1f + %.1f = %.1f", x, y, x+y);
//     break;
//   case 2:
//     printf("Opção Selecionada: 2. SUBTRAÇÂO\n");
//     printf("A subtração dos dois números é: %.1f - %.1f = %.1f", x, y, x-y);
//     break;
//   case 3:
//     printf("Opção Selecionada: 3. DIVISÂO\n");
//     if (y == 0) {
//       printf("Não existe divisão por 0.");
//     }else{
//       printf("A divisão dos dois números é: %.1f / %.1f = %.1f", x, y, x/y);
//     }
//     break;
//   case 4:
//     printf("Opção Selecionada: 3. MULTIPLIÇÃO");
//     printf("A multiplicação dos dois números é: %.1f * %.1f = %.1f", x, y, x*y);
//     break;
//   default:
//     printf("Digite um operação válida!");
//     break;
//   }

//   // Retorna codificação padrão do Windows
//   SetConsoleOutputCP(CPAGE_DEFAULT);
  
//   return 0;
// }


#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main () {

  /*******************************Codificicação  UTF pra TERMINAL ***************************************/
  // Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();

  // Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);
 /*********************************************************************/



  // Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
  
  return 0;
}