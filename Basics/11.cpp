#include <iostream>
#include <math.h>

using namespace std;

bool triplet(int a, int b, int c)
{
    int x, y, z;

    x = max(a, max(b, c));

    if (x == a)
    {
        y = b;
        z = c;
    }

    else if (x == b)
    {
        y = a;
        z = c;
    }

    else if (x == c)
    {
        y = b;
        z = a;
    }

    if ((x * x) == (y * y) + (z * z))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x, y, z, a;

    cout << "Enter 3 Number(s) To Check For Pythagorean Triplet" << endl;
    cin >> x >> y >> z;

    a = triplet(x, y, z);
    cout << "Triplet: " << endl
         << a << endl;

    return 0;
}