#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i; // Return index if found
    return -1;        // Return -1 if not found
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, n, x);
    if (result != -1)
        cout << "Element is present at index " << result;
    else
        cout << "Element is not present in array";

    return 0;
}