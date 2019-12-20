#include<iostream>

using namespace std;

class Temperature{
    public:
        void tempC() // Celsius to Fahrenheit
        {
            float n,convert;
            cout << "Input temperature(In Degree Celsius) : ";
            cin >> n;
            convert = (n * 1.8) + 32;
            cout << "Temperature(In degree Fahrenheit) : " << convert << endl;
        }
        void tempF() // Fahrenheit to Kelvin
        {
            float n,convert;
            cout << "Input temperature(In Degree Fahrenheit) : ";
            cin >> n;
            convert = ((n - 32) * 0.555556) + 273.15;
            cout << "Temperature(In Kelvin) : " << convert << endl;
        }
        void tempF1() // Fahrenheit to celsius
        {
            float n,convert;
            cout << "Input temperature(In Degree Fahrenheit) : ";
            cin >> n;
            convert = (n - 32) * 0.555556;
            cout << "Temperature(In Degree celsius) : " << convert << endl;
        }
        void tempC1() // Celsius to Kelvin
        {
            float n,convert;
            cout << "Input temperature(In Degree celsius) : ";
            cin >> n;
            convert = n + 273.15;
            cout << "Temperature(In Kelvin) : " << convert << endl;
        }
        void tempK() // Kelvin into Celsius
        {
            float n,convert;
            cout << "Input temperature(In Kelvin) : ";
            cin >> n;
            convert = n - 273.15;
            cout << "Temperature(In Degree Celsius) : " << convert << endl;
        }
        void tempK1() // Kelvin into Fahrenheit
        {
            float n,convert;
            cout << "Input temperature(In Kelvin) : ";
            cin >> n;
            convert = ((n - 273.15) * 1.8) + 32;
            cout << "Temperature(In Degree Fahrenheit) : " << convert << endl;
        }
};

int main()
{
    Temperature temp1;
    int n1;
    cout << "1. Celsius into Fahrenheit         5. Kelvin into Celsius" << endl << "2. Fahrenheit into Kelvin          6. Kelvin into Fahrenheit" << endl  << "3. Fahrenheit into Celsius" << endl  << "4. Celsius to Kelvin" << endl << endl << "Choose a number : ";
    cin >> n1;
    cout << endl;
    switch(n1)
    {
        case 1:
            temp1.tempC();
        break;
        case 2:
            temp1.tempF();
        break;
        case 3:
            temp1.tempF1();
        break;
        case 4:
            temp1.tempC1();
        break;
        case 5:
            temp1.tempK();
        break;
        case 6:
            temp1.tempK1();
        break;
        default:
            cout << "Invalid_Input" << endl;
        break;
    }

    return 0;
}
