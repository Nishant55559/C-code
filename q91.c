// bubble sort of element in a 1d array using pointers//
#include<stdio.h>
void main(){
int i,j,a[20]={0},*p,temp,n;
printf("enter the element");
scanf("%d",&n);
printf("enter the elenent");
for(i=0;i<n;i++)
scanf("%d",(p+i));
p=a;
for (i=0;i<n-1;i++)
for(j=0;j<n-i-1;j++)
{
    if(*(p+j)>*(p+j+1))
    {
      temp=*(p+j);
      *(p+j)=*(p+j+1);
      *(p+j+1)=temp;    

    }
}
printf("\n enter after sorting");
for(i=0;i<n;i++)
printf("%d",*(p+i));

}