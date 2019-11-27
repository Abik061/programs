// To check if the number given by user is prime or composite.
#include<iostream>

using namespace std;

int main()
{
    int n,i = 1,a = 0;

    cout << "Enter a number : ";
    cin >> n;

    for(i;i<=n;i++)
    {
        if (n % i == 0)
        {
            a = a + 1;
        }
    }

    if(a==2)
    {

        cout << n << " is prime." << endl;

    }else{

        cout << n << " is composite." << endl;

    }

    return 0;
}
