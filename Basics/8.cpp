#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    int j;

    for (j = 2; j <= sqrt(num); j++)
    {
        if (num % j == 0)
            return false;
    }
    return true;
}

int main()
{
    int a, b, i;

    cout << "Enter Range Of Numbers" << endl;
    cin >> a >> b;

    for (i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}