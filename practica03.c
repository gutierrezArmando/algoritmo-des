#include <stdio.h>
#include "tablas.h"
#include "funciones.h"
#define ENTER 13

int main() {
    M[0]=0xAB;
    printf("%c",getBit(M[0], PC_1[1][7])?'1':'0');
    return 0;
}

void esperaEnter() {
    printf("\nPresiona enter para continuar...");
    while (getch()!=ENTER);
}
