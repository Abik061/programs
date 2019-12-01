// To add numbers from 1 to 20
#include<iostream>

using namespace std;

int main()
{
    int i_num = 1,sum = 0;

    for(i_num;i_num <= 20;i_num++) // Change the value from '20' to desired number. Example: for(i_num; i_num <=100;i_num++)
    {
        sum = sum + i_num;
    }

    cout << "The sum of numbers from 1 to 20 is " << sum << endl;
    return 0;
}
