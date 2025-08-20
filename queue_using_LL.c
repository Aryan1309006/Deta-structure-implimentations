#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *front = NULL, *rare = NULL, *ptr;

void enqueue(int d)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = d;
    temp->next = NULL;
    if (rare == NULL && front == NULL)
    {
        rare = front = temp;
    }
    else
    {
        rare->next = temp;
        rare = temp;
    }
}

void dequeue()
{
    if (front == NULL && rare == NULL)
    {
        printf("Warning:Underflow\n");
    }
    else
    {
        ptr = front;
        printf("Delated node is %d \n", front->data);
        front = front->next;
        free(ptr);
    }
}

void display()
{
    ptr = front;
    if (front == NULL)
    {
        printf("No node to print\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("The node is %d \n", ptr->data);
            ptr = ptr->next;
        }
    }
}

void main()
{

    int choice, d;
    while (1)
    {
        printf("\n___________________Stack(Using linked list)___________\n");
        printf("1.push\n2.pop\n3.display\n4.Exit\n");

        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter data to be add: ");
            scanf("%d", &d);
            enqueue(d);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
        }
    }
}