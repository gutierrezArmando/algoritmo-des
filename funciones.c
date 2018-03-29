void putBitOnReg(unsigned char *registro, int valor, int numBit){
    if(valor){
        *registro|=(0x80>>(numBit-1));
    }
}
