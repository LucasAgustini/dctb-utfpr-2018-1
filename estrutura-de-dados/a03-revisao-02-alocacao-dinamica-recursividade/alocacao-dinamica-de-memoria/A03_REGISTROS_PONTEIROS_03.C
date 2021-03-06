
/* Exemplo de cria��o de Registros e Ponteiros */

#include<stdio.h>

struct Ponto{
   int x, y;
};

typedef struct Ponto Ponto;

int main(){

   // Declara��o de ponteiro para Registros Ponto
   Ponto* ponteiroPonto;

   // Declara��o de vari�vel do tipo Ponto
   Ponto  inicio;

   // Atribui��o do endere�o da vari�vel para o ponteiro
   ponteiroPonto = &inicio;

   // Atribui��o de valores atrav�s do operador de membro do ponteiro
   // Utilizar ponteiroPonto->x � o mesmo que fazer *(ponteiroPonto).x
   ponteiroPonto->x = 10;
   ponteiroPonto->y = 20;

   printf("\n Valores do Ponto = (%d,%d)\n", ponteiroPonto->x, ponteiroPonto->y);

   return 0;
}
