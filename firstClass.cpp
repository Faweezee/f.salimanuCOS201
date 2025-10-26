#include <iostream>
using namespace std;
const float PI = 3.142;

int main()
{
    cout << "Welcome to C++ class"<<endl << endl;
    cout << "     *\n";
    cout << "    * *\n";
    cout << "   *   *\n";
    cout << "  *******\n";
    cout << " *       *\n";
    cout << "*         *\n" << endl;

    cout << "ENTER RADIUS: ";
    double r;
    cin >> r;
    double area = r * r * PI;
    cout << "AREA: ";
    cout<<area << endl;
}