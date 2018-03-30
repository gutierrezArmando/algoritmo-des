#include <stdio.h>
#include "funciones.h"

void putBitOnReg(unsigned char *registro, int valor, int numBit)
{
    if(valor)
        *registro|=(0x80>>(numBit-1));
}

void printBin(unsigned char registro)
{
    int i = 1;
    while(i < 9)
        printf("%d",GETBITVAL_REG(registro, i++));
}

void printC(unsigned char *C)
{
    unsigned char index=0;
    while (index < 7) {
        printBin(C[index++]);
        printf(" ");
    }
}

void rol(unsigned char *C){
    unsigned char index=0, acarreoFinal=0;
    acarreoFinal = C[0]>>7;
    while(index<6)
    {
        C[index]<<=1;
        C[index]|=(C[index+1]>>7);
        index++;
    }
    C[index]<<=1;
    C[index]|=acarreoFinal;
}

/*Funcion que rota un arreglo la cantidad de veces requeridas*/
void rolN(unsigned char *c, int cantidad)
{
    while(cantidad--)
        rol(c);
}
