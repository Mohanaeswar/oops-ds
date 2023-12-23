#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int arr[20];
int len = 0; 

void Traverse();
void Insert();
void Delete();
void Search();

int main()
{
    int choice, index, value, n, element;
    cout << "Enter the number of elements:";
    cin >> n;
    cout << "\nEnter the elements:";
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        len++;
    }

    while (1)
    {
        cout << "\nMenu:\n1. Traverse\n2. Insert\n3. Delete\n4. Search\n5. Exit";
        cout << "\nEnter the choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Traverse();
            break;
        case 2:
            Insert();
            break;
        case 3:
            Delete();
            break;
        case 4:
            Search();
            break;
        case 5:
            exit(0);
        default:
            cout << "Invalid choice.";
            break;
        }
    }
    return 0;
}

void Traverse()
{
    cout << "Array elements: ";
    for (int i = 1; i <= len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Insert()
{
    int index, value;
    cout << "\nEnter the position for the new element:";
    cin >> index;
    cout << "\nEnter the element to be inserted:";
    cin >> value;

    for (int i = len; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = value;
    len = len + 1;
}

void Delete()
{
    int index, value;
    cout << "\nEnter the position of the element to be deleted:";
    cin >> index;
    value = arr[index];
    for (int i = index; i < len - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    len = len - 1;
    cout << "\nThe deleted element is:" << value << endl;}

void Search()
{
    int element;
    cout << "\nEnter the element to be found:";
    cin >> element;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == element)
        {
            cout << "\nElement found at position: " << i << endl;
            return;
        }
    }
    cout << "\nElement not found" << endl;
}
