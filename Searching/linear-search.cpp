#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}
int main(void)
{
    int size = 5;
    int arr[size] = { 2, 3, 4, 10, 40 };
    int key = 10;

    int result = search(arr, size, key);
    if (result == -1)
    {
        cout << "Element is not present in array";
    }
    else
    {
       cout << "Element is present at index " << result; 
    }
    return 0;
}