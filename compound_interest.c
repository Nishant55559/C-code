#include <stdio.h>
#include<math.h>
#define rate 10
int main(){
 int p,n,t;
 float a;
 printf("enter the value of p: ");
 scanf("%d", &p);
 printf("enter the value of n: ");
 scanf("%d", &n);
 printf("enter the value of t (in years): ");
 scanf("%d", &t);
 
 a=p*pow((1+rate/n),n);
 printf("\nthe value of amount is %f ",a);

    return 0;
}
