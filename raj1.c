#include <stdio.h>

int main(){
    int a,b,c,d,e , sum;
    float avg;
    printf("enter the value of a,b,c,d,e");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=(float)sum/5;
    printf("the sum is %d \nthe avg is %f",sum,avg);
    
    return 0;
}