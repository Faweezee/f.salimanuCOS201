#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    srand(time(0));
    cout<<"Random Number: " << rand() % 10<< endl;
    cout << "Q1. ENTER AN INTEGER: \n";
    int num;
    cin >> num;
    if (num % 5 == 0)
    {
        cout << "HiFive\n";
    }
    if (num % 2 == 0)
    {
        cout << "HiEven\n";
    }
    cout <<"\n";    
    

    cout << "Q2. ENTER STUDENT'S AGE: \n";
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult\n";
    }
    else
    {
        cout << "You are NOT an adult\n";
    }

    return 0;
}