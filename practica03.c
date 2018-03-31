#include <stdio.h>
#include "tablas.h"
#include "funciones.h"

/*
@param *c arreglo en el que se almacenará la permutación
@param *K es la llave que se permutara
@param pc1 es la tabla de permitación
*/
void permutar(unsigned char *C, unsigned char *K, PC_1 pc1);
// void setC(unsigned char *C, unsigned char *K, PC_1 pc1);
void printTabla(void *tabla);
int main()
{
    PC_1 pc1;
    IP ip1;
    int i=7;
    ip1 = newIP();
    pc1 = newPC1();
    unsigned char M[8]={0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF};
    unsigned char Mpermutada[8];
    unsigned char K[8]={0x13, 0x34, 0x57, 0x79, 0x9B, 0xBC, 0xDF, 0xF1};
    unsigned char C0[7]={0};
    // printf("%d\n",pc1.val[0][0] );
    // printf("%d\n",ip1.val[0][0] );
    printTabla(&pc1);

    return 0;
}

void permutar(unsigned char *C, unsigned char *K, PC_1 pc1)
{
    int i=0, j=0;
    unsigned char registroConteo = 0;
    while(i<pc1.filas)
    {
        j=0;
        while (j<pc1.columnas) {
            putBitOnReg(&C[(registroConteo>>3)], GETBITVAL_M(K, GET_PC_VALOR(pc1,i,j)), (registroConteo&0x07) + 1);
            registroConteo++;
            j++;
        }
        i++;
    }
}

void printTabla(void *tabla){
    PC_1 a;
    a = *(PC_1*)tabla;
    printf("%d\n", a.val[0][0]);
}
