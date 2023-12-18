#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 5, 7, 9, 15, 11, 19};
    int element;
    int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Enter the element to be found: ";
    cin >> element;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Element not found" << endl;
    }
    return 0;
}

