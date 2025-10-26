#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int num1 = rand() % 10;
    int num2 = rand() % 10;

    if (num1 < num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    cout << "What is " << num1 << " - " << num2 << " = \n";
    int ans;
    cin >> ans;
    if (ans == (num1 - num2))
    {
        cout << "CORRECT";
    }
    else
    {
        cout << "INCORRECT; " << num1 << " - " << num2 << " is: " << (num1 - num2);
    }

    return 0;
}