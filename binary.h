#include<stdio.h>
int binary(int a[] , int n, int target, int high , int low, int mid ){

int flag =0;
while (low<high)

{
    if (a[mid] == target)
    {
        printf("the element is found at index : %d",mid);
        flag=1;
        break;
    }
    
    if (a[high] == target)
    {
        printf("the element is found at index : %d",high);
        flag=1;
        break;
    }
    
    if (a[mid]<target)
    {
         low = mid+1;
         mid = (low + high) /2;
    }
if (a[mid]>target)
{
    high = mid-1;
    mid = (low + high) /2;
}

}
if(flag == 0){
    printf("the element is not found");
}

return 0;

}







