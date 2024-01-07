#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define Max 5

class Stack
{
    int a[Max], top;

public:
    Stack()
    {
        top = -1;
    }
    void push();
    void pop();
    void display();
};

void Stack::push()
{
    int item;
    if (top == Max - 1)
    {
        cout << "Stack Overflow";
    }
    else
    {
        cout << "Enter an element: ";
        cin >> item;
        top++;
        a[top] = item;
    }
}

void Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow";
    }
    else
    {
        cout << "The element popped is " << a[top] << endl;
        top--;
    }
}

void Stack::display()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "The elements in the Stack are" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << a[i] << endl;
        }
    }
}

int main()
{
    clrscr();
    cout << "Implementation of stack using array";
    Stack s;
    int choice;

    while (1)
    {
        cout << "\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid Choice";
        }
    }
    return 0;
    getch();
}

