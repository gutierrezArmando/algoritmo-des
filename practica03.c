#include <stdio.h>
#include "tablas.h"
#include "funciones.h"
#define ENTER 13
#define GET_INDEX_M(valor)(valor/8)


int main()
{
    M[0]=0xAB;

    printf("%d", GET_INDEX_M(23));
    // printf("%c",GET_BIT(M[0], valorPC1(2,7))?'1':'0');
    // printf("%c",GET_BIT(M[0], VALOR_PC1(2,7))?'1':'0');
    // printf("%c",GET_BIT(M[0], VALOR_PC1(PC_1,2,7))?'1':'0');
    return 0;
}
