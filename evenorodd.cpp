// To check if a number inserted by user is even or odd.
#include<iostream>

using namespace std;

int main()
{
    int num_1; // Defining a variable

    cout << "Enter a number to check : ";
    cin >> num_1; // Asking user for input.

    if(num_1 % 2 == 0) // checks if the remainder, when input number is divided by 2, is 0 or not.
    {
        cout << num_1 << " is even." << endl; // if it is 0, this statement will execute.

    }else{

        cout << num_1 << " is odd." << endl; // if it is not 0, this statement will execute.
    }

    return 0;
}
