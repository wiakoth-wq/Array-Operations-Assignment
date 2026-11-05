
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, value, position;

    // Create an array
    cout << "Enter the size of the array: ";
    cin >> n;

    if(n < 1 || n >= 100)
    {
        cout << "Invalid array size!";
        return 0;
    }

    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display original array
    cout << "Original array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Insert a value
    cout << "\nEnter value to insert: ";
    cin >> value;

    cout << "Enter position to insert: ";
    cin >> position;

    if(position < 1 || position > n + 1 || n >= 100)
    {
        cout << "Invalid insertion!";
    }
    else
    {
        for(int i = n; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = value;
        n++;

        cout << "Array after insertion: ";
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    // Delete a value
    cout << "\nEnter position to delete: ";
    cin >> position;

    if(position < 1 || position > n)
    {
        cout << "Invalid deletion!";
    }
    else
    {
        for(int i = position - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        cout << "Array after deletion: ";
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
