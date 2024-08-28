#include <iostream>

using namespace std;

void print(int num)
{
    cout << "Number(s) To Be Added: \n"
         << num << endl;
    return;
}

int add(int x, int y)
{
    print(x);
    print(y);
    print(x + y);
    return x + y;
}

int main()
{
    int x, y;

    cout << "Enter Numbers To Be Added" << endl;
    cin >> x >> y;

    add(x, y);

    return 0;
}