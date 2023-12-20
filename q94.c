// display the 2d array using pointers//
#include<stdio.h>
void main(){ 
int a[10][10]={0},i,j,row,col,*p;
printf("enter the row and col");
scanf("%d,%d",&row,&col);
printf("enter element of 1st matrix");
for (i=0;i<row;i++)
{
 for (j=0;j<col;j++)
scanf("%d",(*(a+i)+j));
}
printf("\n the matrix is : \n");




}


