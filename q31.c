//find the sum of digit in a number//
#include <stdio.h>

int main(){
    int digit=0,sum_digit=0,num=0;
    printf("enter the num");
    scanf("%d",&num);
    
    while (1)
    {
        digit= num%10;
        sum_digit+=digit;
        num=num/10;
        sum_digit+=num;
        if (num==0);break;
        
    }
    printf("\n the sum of digit is %d",sum_digit);





    return 0;
}