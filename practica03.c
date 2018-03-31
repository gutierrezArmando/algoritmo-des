#include <stdio.h>
#include <string.h>
#include "tablas.h"
#include "funciones.h"

/*
@param *c arreglo en el que se almacenará la permutación
@param *K es la llave que se permutara
@param pc1 es la tabla de permitación
*/
void permutar(unsigned char *C, unsigned char *K, void *tabla, char *tipo);

// void setC(unsigned char *C, unsigned char *K, PC_1 pc1);
void printTabla(void *tabla);

int main()
{
    PC_1 pc1;
    IP ip;
    int i=7;
    ip = newIP();
    pc1 = newPC1();
    unsigned char M[8]={0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF};
    unsigned char Mpermutada[8];
    unsigned char K[8]={0x13, 0x34, 0x57, 0x79, 0x9B, 0xBC, 0xDF, 0xF1};
    unsigned char C0[7]={0};
    printArray(K,8);
    permutar(C0, K, &pc1, "PC_1");
    printf("\n");
    printArray(C0,7);
    // printf("\n*********************************\n");
    //
    // printArray(M,8);
    // printf("\n");
    // permutar(Mpermutada, M, &ip, "IP");
    // printArray(Mpermutada,8);
    // printf("%d\n",pc1.val[0][0] );
    // printf("%d\n",ip1.val[0][0] );
    // printTabla(&pc1);


    return 0;
}


void permutar(unsigned char *C, unsigned char *K, void *tabla, char *tipo)
{
    PC_1 pc1;
    PC_2 pc2;
    IP ip;

    int i=0, j=0, filas, columnas;
    unsigned char registroConteo = 0;
    if (!strcmp("PC_1",tipo)){
        pc1 = *(PC_1*)tabla;
    }
    if (!strcmp("PC_2",tipo)){
        pc2 = *(PC_2*)tabla;
    }
    if (!strcmp("IP",tipo))
        ip = *(IP*)tabla;
    // while(i<pc1.filas)
    while(i<GET_ROWS(*tabla))
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
