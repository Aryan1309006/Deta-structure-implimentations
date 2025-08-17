#include <stdio.h>
#include <conio.h>
#define MAX 5 // constant

// stack initialization
int st[MAX];
int top = -1;

// function prototypes
void push();
void pop();
void peek();
void display();

// main method
void main()
{
    int option;
    char choice = 'y';
    while (choice == 'y')
    {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n");
        printf("Enter the option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("\nInvalid option");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);
    }

    getch();
}

// Push: Add new element
void push()
{
    int value;
    if (top == MAX - 1)
    {
        printf("\nWARNING: Stack overflow");
    }
    else
    {
        printf("\nEnter the value to push onto the stack: ");
        scanf("%d", &value);
        top++;
        st[top] = value;
    }
}

// Pop: Remove element
void pop()
{
    if (top == -1)
    {
        printf("\nWARNING: Stack underflow");
    }
    else
    {
        printf("\nThe deleted data is %d", st[top]);
        top--;
    }
}

// Peek: Show top element
void peek()
{
    if (top == -1)
    {
        printf("\nWARNING: Stack underflow");
    }
    else
    {
        printf("\nThe top element is %d", st[top]);
    }
}

// Display all stack elements
void display()
{
    if (top == -1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        printf("\nStack elements are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("Element %d: %d\n", i, st[i]);
        }
    }
}
