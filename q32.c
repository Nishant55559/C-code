//find the reverse of a number//
#include <stdio.h>

int main(){
    int num=0,digit=0,rev=0;
    printf("enter the num");
    scanf("%d",&num);

    while (num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
        
    }
    printf("the rev no is %d",rev);
    
    return 0;
}