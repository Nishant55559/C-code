#include <stdio.h>

int main(){
    float a,b,c ,sum,sub; 
    printf(" enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    sum=a+b;
    sub=(a+b)-c;
    
    printf("the sum is %f,\nthe sub is %f", sum,sub);



    return 0;
}