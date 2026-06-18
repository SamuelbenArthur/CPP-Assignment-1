#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radius;
    const double PI = 3.14159;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Area = " << PI * pow(radius, 2) << endl;

    return 0;
}
