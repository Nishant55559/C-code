//the sum of n natural number 11+22+33.....+n//
#include <stdio.h>
#include <math.h>
int main(){
    int n , sum=0,i;
    printf("enter the n ");
    scanf("%d",&n);
    for (  i= 1; i <= n; i++);
    {
        sum+=11*i;
       

    }
    printf("the final sum is %d",sum);
    return 0;
}