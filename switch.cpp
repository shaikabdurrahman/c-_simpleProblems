#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cout << "Enter any character/alphabet: ";
    cin >> alphabet;
    switch(alphabet)
    {
         case 'a':
        cout << "entered alphabet is vowel";
        break;
         case 'e':
        cout << "entered alphabet is vowel";
        break;
         case 'i':
        cout << "entered alphabet is vowel";
        break;
         case 'o':
        cout << "entered alphabet is vowel";
        break;
         case 'u':
        cout << "entered alphabet is vowel";
        break;
        default :
        cout << "consonent";
        break;

    }
}