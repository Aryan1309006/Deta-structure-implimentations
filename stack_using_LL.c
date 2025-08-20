#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
} *top = NULL, *ptr;

// insertion at begining
void push(int d)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = d;
    temp->next = top;
    top = temp;
}
void pop()
{
    if (top == NULL)
    {
        printnf("Warning:Underflow \n");
        return;
    }
    else
    {
        ptr = top;
        ptintf("the deletsed node is %d",top->data);
        top = top->next;
        free(ptr);
    }
}

void display()
{
    if (top == NULL)
    {
        printnf("no node");
        return;
    }
    else
    {
        ptr = top;
        while (ptr != NULL)
        {
            printf("Node is %d\n", ptr->data);
            ptr->next;
        }
    }
}

void main()
{
    int choice, d;
    while (1)
    {
        printf("\n___________________Stack(Using linked list)___________\n");
        printf("1.push\n2.pop\n3.display\n4.Exit");

        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to be add: ");
            scanf("%d", &d);
            push(d);
            break;
        case 2:
            pop();
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

    // manu drivan code
}