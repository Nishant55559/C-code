#include <stdio.h>
#include <math.h>

int main(){
float a,b,c,d,r1,r2;
printf("enter the the value of a,b,c");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if (d>0)
{
    r1=(-b-sqrt(4*a*c))/2*a;
    r2=(-b+sqrt(4*a*c))/2*a;
    printf("\n the value of roots are real is %f%f",r1,r2);

}
    else if (d==0)
    {
      r1=(-b)/2*a;
      r2=(b)/2*a;
      printf("\nthe value ofroots are equal is %f%f",r1,r2);

    }
    else 
    printf("the value of roots are imaginary");
    
    return 0;
}