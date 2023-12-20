// wap to reverse a string in 1d array using pointers//
#include<stdio.h>
#include<string.h>
void main(){
char str[100]="nishant";
char *b,*c,ch;
int l,i;
printf("the string is %d \n",str);
l=strlen(str);
b=str;
c=str+l-1;
for (i=0;i<(l-1)/2;i++)
{ ch=*c;
  *c=*b;
  *b=ch;
   b++;
   c--;
}
printf("reverse of string is %s \n",str);
}








