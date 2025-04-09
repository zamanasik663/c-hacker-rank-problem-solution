#include<stdio.h>



int main(){

    unsigned char a = 12; //0 0 0 0 1 1 0 0
    unsigned char b = 25; //0 0 0 1 1 0 0 1

    //AND Operation
    unsigned char c = a & b; //0 0 0 0 1 0 0 0 = 8(decmial value)
    printf("AND Operation: %d\n",c);
    
    //OR Operation
    unsigned char d = a | b; //0 0 0 1 1 1 0 1 = 29(decmial value)
    printf("OR Operation: %d\n",d);

    //XOR Operation
    unsigned char e = a ^ b; //0 0 0 1 0 1 0 1 = 21(decmial value)
    printf("XOR Operation: %d\n",e);

    //NOT Operation
    unsigned char f = ~a; //1 1 1 1 0 0 1 1 = 243(decmial value)
    printf("NOT Operation: %d\n",f);
      
    //right shift operation
    unsigned char g = 212; // 1 1 0 1 0 1 0 0
    unsigned char h = g >> 1; // 0 1 1 0 1 0 1 0 = 106(decmial value)
    unsigned char i = g >> 2; // 0 0 1 1 0 1 0 1 = 53(decmial value)
    unsigned char j = g >> 3; // 0 0 0 1 1 0 1 0 = 26(decmial value)
    printf("Right Shift Operation: %d %d %d\n",h,i,j);
    

    //left shift operation
    unsigned char k = 212; // 1 1 0 1 0 1 0 0
    unsigned char ls1 = k << 1; //  1 0 1 0 1 0 0 0 = 168(decmial value)
    unsigned char ls2 = k << 2; //  0 1 0 1 0 0 0 0 = 80(decmial value)
    unsigned char ls3 = k << 3; //  1 0 1 0 0 0 0 0 = 160(decmial value)
    printf("Left Shift Operation: %d %d %d\n",ls1,ls2,ls3);

    return 0;
}