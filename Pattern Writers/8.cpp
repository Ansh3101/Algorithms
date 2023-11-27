#include <iostream>
using namespace std;

int coefficient(int line, int n)
{
    int coeff = 1;
    if (n > line - n)
        n = line - n;
    for (int i = 0; i < n; ++i)
    {
        coeff *= (line - i);
        coeff /= (i + 1);
    }

    return coeff;
}

int main()
{
    int n;
    cout << "Binomial Factor: ";
    cin >> n;
    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
            cout << "\t" << coefficient(line, i);
        cout << "\n";
    }
    return 0;
}
