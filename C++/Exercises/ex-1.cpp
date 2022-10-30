#include <iostream>

int main(void)
{
    char arr[40], temp;
    int counter = 0;

    std::cout << "Enter a word: ";
    std::cin >> arr;

    while (arr[counter] != '\0')
    {
        counter++;
    }

    for (int i = 0; i < counter; i++)
    {
        for (int j = 0; j < counter - 1; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    std::cout << arr;

    return 0;
}