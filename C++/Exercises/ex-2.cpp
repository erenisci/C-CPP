#include <iostream>

using namespace std;

void ascending(int arr[], int n);
void descending(int arr[], int n);
void arrInfo(int arr[], int n);

int main(void)
{
    int n;
    int arr[5];
    n = sizeof(arr) / sizeof(int);

    cout << "Enter the indexes of the arr: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n1. Ascending\n";
    cout << "2. Descending\n\n";

    std::cout << "Key: ";
    int key;
    cin >> key;
    std::cout << "\n";

    if (key == 1)
        ascending(arr, n);
    else
        descending(arr, n);
    arrInfo(arr, n);

    return 0;
}

void ascending(int arr[], int n)
{
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void descending(int arr[], int n)
{
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void arrInfo(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}