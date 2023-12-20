#include<stdio.h>
#include"binary.h"
int main(){
int a[20]={1,3,5,7,9};

int target = 3;
int high= 4;
int low = 0;
int mid = (low+high)/2;

binary(a, 5, target ,high , low , mid );

return 0;
}

