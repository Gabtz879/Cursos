/*
    Variables
*/
#include <stdio.h>

int main(){
    char C = 'y'; // tamaño 1 byte 0....255
    printf("%c\n",C);
    int a = 20; // tamaño 2 bytes -32788 ... 32767
    printf("%d\n",a);
    short e = -1; // 2 bytes -128...127
    printf("%hd\n",e);
    unsigned int u = 25; //2 bytes 0...65535
    printf("%u\n",u);
    long l = 5982; // 4 byte -2147483648... 2147483647
    printf("%ld\n",l);
    float f = 72.534; //4 bytes
    printf("%.2f\n",f);
    double d = 12323.87765800001; // 8 bytes
    printf("%.5lf\n",d);
    return 0;
}