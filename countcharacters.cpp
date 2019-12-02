// To count the number of characters in the user-input-text.
#include<iostream>

using namespace std;

int main()
{
    string c_char;

    cout << "Enter text : ";
    getline(cin,c_char);

    int num = c_char.length();
    cout << "The number of characters in above text is " << num << endl;

    return 0;
}
