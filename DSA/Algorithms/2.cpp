// Binary Search

#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid; // Element found
        if (arr[mid] < x)
            l = mid + 1; // Search right half
        else
            r = mid - 1; // Search left half
    }
    return -1; // Element not found
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        cout << "Element is present at index " << result;
    else
        cout << "Element is not present in array";
    return 0;
}