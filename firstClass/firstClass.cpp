#include <iostream>
using namespace std;

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
    double PI = 3.142;
    double area = r * r * PI;
    cout << "AREA: ";
    cout<<area << endl;
}