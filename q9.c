#include <stdio.h>

int main(){
    float a;
    char b;
    double c;
    unsigned d;
    printf("\nenter the value of float,\nenter the value of char,\nenter the value of double,\nenter the value of unsigned ");
    scanf("%f%c%lf%u",&a,&b,&c,&d);
    printf("\nthe value of float is %f,\nthe value of char is %c,\nthe value of double is %lf,\nthe value of unsigned is %u ",a,b,c,d); 
    return 0;
}