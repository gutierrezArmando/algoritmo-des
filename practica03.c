#include <stdio.h>
#include "tablas.h"
#include "funciones.h"

int getBitFromM(unsigned char M[], int posicion);

int main()
{
    PC_1 pc1;
    pc1 = newPC1();
    int i=0, j=0, k=0;
    unsigned char M[8]={0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF};
    unsigned char K[8]={0x13, 0x34, 0x57, 0x79, 0x9B, 0xBC, 0xDF, 0xF1};
    unsigned char C0[7]={0};
    while(i<pc1.filas)
    {
        j=0;
        while (j<pc1.columnas) {
            printf("%d", GETBITVAL_M(K, GET_PC_VALOR(pc1,i,j)));
            j++;
        }
        printf(" ");
        i++;
    }

    while(k<7){
        printf("%x ",C0[k++]);
    }

    return 0;
}
