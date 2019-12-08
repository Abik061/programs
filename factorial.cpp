#include<iostream>

using namespace std;

int main()
{
    int a = 1,i = 1;
    cout << "Enter a number : ";
    cin >> a;
    while(a >= 2)
    {
        i = i * a;
        a--;
    }
    cout << "The factorial is " << i << endl;

    return 0;
}
