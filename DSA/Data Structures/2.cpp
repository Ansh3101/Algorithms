// List (Vectors)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> list = {1, 2, 3, 4, 5};
    for (int i : list)
    {
        cout << i << " ";
    }
    return 0;
}