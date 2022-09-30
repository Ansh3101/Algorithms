#include <iostream>
using namespace std;

int main()
{
    char alphabet;
    cout << "Enter The Vowel" << endl;
    cin >> alphabet;

    switch (tolower(alphabet))
    {
    case 'a':
        cout << "Vowel" << endl;
        break;
    case 'e':
        cout << "Vowel" << endl;
        break;
    case 'i':
        cout << "Vowel" << endl;
        break;
    case 'o':
        cout << "Vowel" << endl;
        break;
    case 'u':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Consonant" << endl;
        break;
    }
    return 0;
}