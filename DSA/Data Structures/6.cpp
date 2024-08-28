// Hash Table

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> umap;
    umap["apple"] = 1;
    umap["banana"] = 2;
    umap["cherry"] = 3;

    for (auto &pair : umap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}