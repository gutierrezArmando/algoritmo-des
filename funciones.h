

// Obtiene el valor del bit de la posicion, del registro
#define GETBITVAL_REG(registro, posicion)((registro&(0x80>>(posicion-1)))?1:0)

// Espera un valor (1:64) y lo divide entre 8, para localizar la posicion
// del byte con el que se debe trabajar
#define FIND_M_INDEX(numBit)((numBit-1)/8)

// Obtiene el valor de la tabla pc, correspondiente a la fila y columa
#define GET_PC_VALOR(pc, fila, columna)(pc.val[fila][columna])

// Obtiene el valor del numero de bit del total de los bits necesarios por M
#define GETBITVAL_M(m, numBit)(GETBITVAL_REG(m[FIND_M_INDEX(numBit)],(numBit-(FIND_M_INDEX(numBit)*8))))

#define GET_ROWS(tabla)(tabla.filas)
#define GET_COLUMS(tabla)(tabla.columnas)

void putBitOnReg(unsigned char *registro, int valor, int numBit);

void printBin(unsigned char registro);

void printArray(unsigned char *C, int cantidadRegistros);
// void printC(unsigned char *C);

void rol(unsigned char *C);

void rolN(unsigned char *c, int cantidad);
