#include <iostream>
using namespace std;

int main()
{
    double n;

    cout << "Enter The Number Upto You Want The Sum" << endl;
    cin >> n;

    cout << "Sum: " << n * (n + 1) / 2.0 << endl;
    return 0;
}