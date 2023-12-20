// sum of elements in an array using user defined function by passing array in an function//
#include <stdio.h>
int sum_arr(int*, int);
 void main(){
    int i,n,sum , a[20]={0} , *p;
    printf("enter the no of elements n");
    scanf("%d", &n);
    printf("enter the element");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=&a[0];
    sum=sum_arr(p,n);
    printf("the sum is %d",sum );
 }
   int sum_arr(int *x,int num)
   {int sum=0, i;
    for(i=0;i<num;i++)
     sum = sum +*(x+i);
    return sum;

   }  

    
    
