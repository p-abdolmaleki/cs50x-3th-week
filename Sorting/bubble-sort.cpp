#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{
    int i, j;
    bool swapped;
    for (i = 0; i < size - 1; i++)
    {
        swapped = false;
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}

int main()
{
    int size = 7;
    int arr[size] = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr, size);
    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0;
}