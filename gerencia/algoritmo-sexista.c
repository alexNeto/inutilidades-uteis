
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  char Nome[50];
  int Sexo, Idade;

  printf("Digite seu nome:\n");
  fgets(Nome, 50, stdin);

  printf("%s qual é o seu sexo?\n1\tMasculino\n2\tFeminino\n", Nome);
  scanf("%d", &Sexo);

  printf("Qual é a sua idade?\n");
  scanf("%d", &Idade);

  if (Sexo == 2) {
    if (Idade < 25)
      printf("%s Aceita\n", Nome);
    else
      printf("%s N�o aceita\n", Nome);
  } else {
    printf("%s N�o aceito\n", Nome);
  }

  system("pause");
  return 0;
}
