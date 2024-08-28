// Maximum Product From Elements Of An Array

#include <iostream>
using namespace std;

int main()
{
    int p;
    cin >> p;
    int arr[p];
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }

    long large = 0;
    long slarge = 0;

    for (int i = 0; i < p; i++)
    {
        if (large < long(arr[i]))
        {
            slarge = large;
            large = long(arr[i]);
        }
        else if (slarge < long(arr[i]))
            slarge = long(arr[i]);
    }

    cout << large * slarge << endl;
    return 0;
}