// prog to swap two no using call by reference //
#include<stdio.h>
void swap(int* , int*);
void main()
{ int a=10, b=20, *p_a , *p_b;
p_a=&a;
p_b=&b;
printf("the initial value of a and b is %d and %d",a,b);
swap(p_a,p_b);
printf("the final value of a and b after swap is %d and %d",a,b);
}
void swap(int* x,int* y)
{ int temp;
 temp=*x;
 *x=*y;
 *y=temp;

}