// linear search in 1d array using pointer//
#include<stdio.h>
void main()
{ int a[20]={0},i,n,key,flag=0,*p;
p=a;
printf("enter the no of element");
scanf("%d",&n);
printf("enter the element ");
for(i=0;i<n;i++)
scanf("%d",(p+i));
printf("enter the element to be searched");
scanf("%d",&key);

for(i=0;i<n;i++)
{if( key==*(p+i))
{printf("the element is found");
flag=1;
break;
}
if (flag==0)
    printf("\n the element is not found");}
}