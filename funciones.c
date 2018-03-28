int getBit(unsigned char registro, unsigned int numBit){
    return (registro&(0x80>>(numBit-1)));
}
