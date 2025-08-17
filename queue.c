#include <stdio.h>
#include <stdlib.h>
#define max 5
int rare = -1, front = -1;
int q[max];

void enqueue();
void dequeue();
void peek();
void display();

void main()
{

    int choice;
    while (1)
    {
        printf("\n_________________Queue menu__________\n");
        printf("\n1.Enqueue\n2.Dqueue\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter a index between 1to4 for select operation:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Enter a valid index\n");
            break;
        }
    }
}
void enqueue()
{
    int data;
    printf("Enter data:");
    scanf("%d", &data);
    if (rare == max - 1)
    {
        printf("\nWARNING:Queue overflow \n");
    }
    else if (front == -1 && rare == -1)
    {
        front = 0;
        rare = 0;
        q[rare] = data;
    }
    else
    {
        rare++;
        q[rare] = data;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("\nWARNING:Queue underflow \n");
    }
    else if (front == rare)
    {
        printf("Deletad element:%d \n", q[front]);
        rare = -1;
        front = -1;
    }
    else
    {
        printf("Deletad element:%d \n", q[front]);
        front++;
    }
}
void peek()
{
    printf("First element is %d \n", q[front]);
}
void display()
{
    int i = front;
    while (i <= rare)
    {
        printf("Element:%d \n", q[i]);
        i++;
    }
}
