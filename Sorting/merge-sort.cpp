#include <iostream>
using namespace std;
void merge(int arr[], int left,
           int mid, int right)
{
    int left_size = mid - left + 1;
    int right_size = right - mid;

    int L[left_size], R[right_size];

    for (int i = 0; i < left_size; i++)
    {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < right_size; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0;
    int k = left;

    while (i < left_size && j < right_size)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < left_size)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < right_size)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void printVector(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size = 6;
    int arr[size] = {12, 11, 13, 5, 6, 7};

    cout << "Given array is \n";
    printVector(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "\nSorted array is \n";
    printVector(arr, size);
    return 0;
}