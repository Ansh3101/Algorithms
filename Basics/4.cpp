#include <iostream>
using namespace std;
int main()
{
    int n, i;

    cout << "Input" << endl;
    cin >> n;

    int sum = 0;

    i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }

    cout << sum << endl;

    return 0;
}