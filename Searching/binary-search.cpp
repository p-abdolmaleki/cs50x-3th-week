#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int target)
{
    if (high >= low) 
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            return binarySearch(arr, low, mid - 1, target);

        return binarySearch(arr, mid + 1, high, target);
    }
  return -1;
}

int main()
{
    int size = 5;
    int arr[5] = { 2, 3, 4, 10, 40 };
    int target = 10;
    int result = binarySearch(arr, 0, size - 1, target);
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