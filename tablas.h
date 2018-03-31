typedef struct {
    unsigned char val[7][8];
    unsigned char filas;
    unsigned char columnas;
}PC_1;

PC_1 newPC1(void);

typedef struct {
    unsigned char val[8][8];
    unsigned char filas;
    unsigned char columnas;
}IP;

IP newIP(void);

typedef struct {
    unsigned char val[6][8];
    unsigned char filas;
    unsigned char columnas;
}PC_2;

PC_2 newPC2(void);
