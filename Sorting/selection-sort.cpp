#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        if (min_idx != i)
        {
            swap(arr[min_idx], arr[i]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size = 5;
    int arr[size] = {64, 25, 12, 22, 11};
    selectionSort(arr, size);
    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0;
}