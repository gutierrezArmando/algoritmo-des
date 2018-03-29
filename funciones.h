// Obtiene el valor del bit de la posicion, del registro
#define GET_BIT(registro, posicion)(registro&(0x80>>(posicion-1)))

// Espera un valor (1:64) y lo divide entre 8, para localizar la posicion
// del byte con el que se debe trabajar
#define INDEX_FOR_M(valor)(valor/8)

void printByte(unsigned char byte);
