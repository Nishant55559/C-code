//the sum of n natural number 1^2+2^2+3^2+.....+n//

 #include <stdio.h>
 #include <math.h>
int main(){
    int n , sum=0,i;
    printf("enter the n ");
    scanf("%d",&n);
    for (  i= 1; i <= n; i++);
    {
        sum+=pow(i,2);
       

    }
    printf("the final sum is %d",sum);
    return 0;
}