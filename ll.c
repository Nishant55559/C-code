#include<stdio.h>
#include<stdlib.h>

struct node{
             int data;
             struct node *next;
};

        struct node *top = NULL;

        void push(){

        int element;
        printf("enter the element to pushed");
        scanf("%d", &element);

        struct node *new_node = (struct node*)malloc(sizeof(struct node));
        new_node ->data = element;
        new_node ->next = top;
        top = new_node;
        }

        void pop(){

        if(top == NULL){
           printf("stack is empty");                   
        }
        else{
                  struct node *temp = top;
                  top = top ->next;
                  free(temp);            
        }
        }

        void display(){

          if(top == NULL){
           printf("stack is empty");                   
        }
        else{
                struct node *ptr = top;
                printf("the elements of stack are:");
                while(ptr!= NULL){
                printf("%d", ptr->data);
                ptr = ptr ->next;
                }
        }

        }
                
                int main(){

                int choice, end =1 ;
                while(end){
                printf("\n 1. push \n 2. pop \n 3. display \n enter your choice \n");
                scanf("%d", &choice);
                switch(choice){
                     case 1: push();
                             break;

                     case 2: pop();
                             break;

                     case 3: display();
                              break;

                    default : printf("invalid choice");
                              break;
                } 
                }      
                }

        

