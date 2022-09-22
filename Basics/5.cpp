#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number" << endl;
    cin >> n;

    cout << "Multiplication Table Of " << n << endl;

    for (int i = 1; i <= 10; i++)
    {
        int product = n * i;
        cout << n << "x" << i << " :" << product << endl;
    }
    return 0;
}