#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int ops;

  printf("Qual a nota do aluno");

  scanf("%d", &ops);

  switch (ops) {
    case 1:
    case 2:
    case 3:
    case 4:
      printf("Conceito: F");
      break;
    case 5:
      printf("Conceito: E\n");
      break;
    case 6:
      printf("Conceito: D\n");
      break;
    case 7:
      printf("Conceito: C\n");
      break;
    case 8:
      printf("Conceito: B\n");
      break;
    default:
      printf("Conceito: A\n");
  }

  return 0;
}
