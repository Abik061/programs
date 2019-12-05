// A simple calculator.

#include<iostream>

using namespace std;

void sum(float num1,float num2)
{
    float add;
    add = num1 + num2;
    cout << "Ans: " << add << endl;
}

void diff(float num1,float num2)
{
    float dif;
    dif = num1 - num2;
    cout << "Ans: " << dif << endl;
}

void product(float num1,float num2)
{
    float mul;
    mul = num1 * num2;
    cout << "Ans: " << mul << endl;
}

void quot(float num1,float num2)
{
    float q;
    q = num1 / num2;
    cout << "Ans: " << q << endl;
}
void rem(int num1, int num2)
{
    int re;
    re = num1 % num2;
    cout << "Ans: " << re << endl;
}

int main()
{
    float a,b;
    char op;
    cout << "First number : ";
    cin >> a;

    cout << "Operator(+,-,/,*,%) : ";
    cin >> op;

    cout << "Second number : ";
    cin >> b;

    switch(op)
    {
        case '+':
            sum(a,b);
        break;

        case '-':
            diff(a,b);
        break;

        case '*':
            product(a,b);
        break;

        case '/':
            quot(a,b);
        break;

        case '%':
            rem(a,b);
        break;

        default:
            cout << "Invalid_Operator_or_Operand" << endl;
    }
    return 0;
}
