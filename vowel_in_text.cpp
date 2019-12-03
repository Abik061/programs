/* To check if a letter is vowel or not.

NOTE: Only one letter/character should be given.
    : If multiple characters are given, it will only see the first character.
*/
#include<iostream>

using namespace std;

int main()
{
    char a;
    cout << "Enter a letter : ";
    cin >> a;

    switch(a)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cout << a << " is a vowel." << endl;
        break;

        default:
            cout << a << " is a not vowel." << endl;
        break;
    }

    return 0;
}
