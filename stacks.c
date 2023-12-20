#include<stdio.h>

int main(){

    int a[20];
    int top =-1;
    int n =5;
    int end =1;
    while(end){
    printf("1. Push \n 2. Pop \n 3. Peek \n 4. Display \n Enter choice :");
    int choice;
    scanf("%d",&choice);

    switch(choice){
        case 1: if(top==n-1) {
                    printf("overflow");

        }
        else {
            int x;
            printf("enter the element to be pushed :");
            scanf("%d",&x);
            top++;
            a[top]= x;
        }break;

        case 2: if (top==-1){
                        printf("underflow");
        }

        else{
            a[top]=0;
            top--;
        }
        break;

        case 3: printf("the top most element is %d",a[top]);break;

        case 4:  if (top ==-1) printf("stack is empty");
                for(int i= top;i>0;i--){
                    printf("%d \n",a[i]);
                   
        }
                 break;
        default : end=0;
        break;
    }
    }
    return 0;
}