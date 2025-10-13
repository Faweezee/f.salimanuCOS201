#include <iostream>
using namespace std;

int main()
{
    //postincrement
    int i = 3;
    int j= 3;
    i++;
    j--;
    cout <<"i:" << i << "\n";
    cout << "j:" << j << "\n";

    //preincrement
    int a = 1;
    int b = ++a;
    cout << "b:" << b << "\n";
    cout << "a:" << a << "\n";

}
