// Obtiene el valor del bit de la posicion, del registro
#define GET_BIT(registro, posicion)(registro&(0x80>>(posicion-1)))
