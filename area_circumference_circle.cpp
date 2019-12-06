#include <iostream>
#include <math.h>
#define PI 3.142857143
using namespace std;
int main()
{
float r,area,cir;
cout << "Enter radius : ";
cin >> r;

area = 2 * PI * pow(r,2);
cir = 2 * PI * r;

cout << "The area of circle is " << area << " and the circumference is " << cir << endl;

return 0;

}
