#include <stdio.h>
#define size 10

void main()
{
    int a[size] = {0};
    int n = sizeof(a);
    int front, rear;
    front = rear = -1;
    int choice, end = 1;
    
    while (end)
    {
        printf("1. Enqueue\n2. Dequeue\n3.Display\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                if (rear == n-1)
                printf("\nQueue is full\n");
                else
                {
                    int x;
                    printf("\nEnter the element to be enqueued: ");
                    scanf("%d", &x);
                    if (front == -1)
                        front++; rear++;
                        a[rear] = x;
                }
                break;
        
            case 2:
                if (front == -1 && rear == -1)
                    printf("\nQueue is empty\n");
                else
                {
                    printf("\n%d is dequeued", a[front]);
                    front++;
                }
                break;
                
            case 3:
                if (front == -1 && rear == -1)
                    printf("\nQueue is empty");
                else
                {
                    for (int i=front; i<rear+1; i++)
                        printf("%d ", a[i]);
                }
                break;
                
                
        }
    }
}