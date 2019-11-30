// A multiplication table only for integers.

#include<iostream>

using namespace std;

int main()
{
    int a_num,up_to,i;

    cout << "Enter a number : ";
    cin >> a_num;
    cout << "Multiply from 1 to ";
    cin >> up_to;

    cout << "Multiplication table of " << a_num << " upto " << up_to << endl;

    for(i = 1;i <= up_to;i++)
    {
        cout << a_num << " * " << i << " = " << (a_num * i) << endl;
    }

    return 0;
}
