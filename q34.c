//pattern using loop//
#include <stdio.h>

int main(){
    int height,k,i;
    printf("enter the height");
    scanf("%d",&height);


    for (i= 1; i<=height; i++)

    {
      for ( k=1; k<=i; k++)
      
        printf(" *");
       printf("\n");
    }
    
     
    return 0;
}