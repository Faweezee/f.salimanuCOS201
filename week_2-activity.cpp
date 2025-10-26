#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Q1
    cout << "Q1: HYPOTENUSE CALCULATOR\n";
    cout << "ENTER THE OPPOSITE SIDE OF THE TRIANGLE: ";
    float opp;
    cin >> opp;
    cout << "ENTER THE ADJACENT SIDE OF THE TRIANGLE: ";
    float adj;
    cin >> adj;
    float hyp = sqrt(powf(adj,2)+powf(opp,2));
    cout << "THE HYPOTENUSE OF THE RIGHT ANGLE IS: "<<hyp<<"\n\n";

    //Q2
    cout << "Q2: BALANCE CALCULATOR\n";
    cout << "ENTER THE ACCOUNT BALANCE: ";
    float bal;
    cin >> bal;
    cout << "ENTER THE ANNUAL INTEREST RATE(%): ";
    float rt;
    cin >> rt;
    rt = rt / 100.0;
    double amt = bal + (bal * rt * 1.0);
    cout << "BALANCE AFTER ONE YEAR: " << amt<<"\n";

    //Q3
    double amt2  = amt + (amt * rt);
    cout << "BALANCE AFTER TWO YEARS: " << amt2 << "\n";

    return 0;
}