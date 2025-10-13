#include <iostream>
using namespace std;

int main()
{
    //Q1
    cout << "QUESTION 1:\nSimple Calaaculations" << endl << endl;
    cout << "ENTER THE FIRST NUMBER: ";
    float num1;
    cin >> num1;
    cout << "ENTER THE SECOND NUMBER: ";
    float num2;
    cin >> num2;
    float sum = num1 + num2;
    float product = num1 * num2;
    float diff = num1 - num2;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;
    cout << "Difference between " << num1 << " and " << num2 << " is: " << diff << endl<<endl<<endl;

    //Q2
    cout << "QUESTION 2:\nNumber swapper" << endl << endl;
    cout << "ENTER THE FIRST NUMBER: ";
    cin >> num1;
    cout << "ENTER THE SECOND NUMBER: ";
    cin >> num2;
    double temp = num1;
    num1 = num2;
    num2 = temp;
    cout <<endl<< "FIRST NUMBER: " << num1 << "\nSECOND NUMBER: " << num2;
}