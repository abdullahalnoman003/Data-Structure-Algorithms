#include <stdio.h>
#define MAX 8 //This stack will have maximum of 8 elements.
int top = -1;
int Stack[MAX];

void push() // function for Pushing elements.
{
    int num;
    if (top == MAX - 1)
    {
        printf("Stack is Full.\n");
    }
    else
    {
        printf("Enter Element to Push: ");
        scanf("%d", &num);
        top++;
        Stack[top] = num;
        printf("Pushed %d into Stack.\n", num);
    }
}
void pop() // function for deleting elements.
{
    int num;
    if (top == -1)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        num = Stack[top];
        printf("Poped %d from Stack.\n", num);
        top--;
    }
}
void display() // function for Displaying the Available elements in the stack
{
    if (top==-1)// checking if the stack is empty or not.
    {
       printf("Stack is Empty.\n");
    }else{
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", Stack[i]);
        }
        printf("\n");
    }
    
}
int main()
{
    int choice = 1;
    while (choice)
    {
        printf("Enter What do you want:\n1. Push.\n2. Pop.\n3. Display.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
        fflush(stdin);
        printf("Do you Want to continue? \n(0 or 1)\n");
        scanf("%d", &choice);
    }
    if (choice == 0)
    {
        printf("Exiting Program. Thank you.\n"); // Program end message 
    }
    
    return 0;
}
