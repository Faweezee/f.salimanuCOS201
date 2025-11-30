#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f(int n)
{
	double sum = 0;
	for (int i = 1; i <=n; i++)
	{
		sum += (1.0/(pow(i,2)));
	}
	double mult = 6.0 * sum;
	return pow(mult, 0.5);
}

int main()
{
	cout<<"n\tf(n)\n";
	for (int i = 2; i<=20; i+=2)
	{
		cout<<i<<"\t"<<f(i)<<endl;
	}
	
	int _x = 0;
    _x = _x++ + ++_x + 1;
    cout << _x<<endl;
	int ii = 0;
    do {
        if (ii == 2) ii++;
        cout << ii++;
    } while (ii < 4);
    cout << endl;
	int x = 3;
    x += x++ + ++x; // x++ + ++x = 3 + (++ ++ 3) = 3 + 5 = 8, x = 5, 8+5= 13;
    cout << x<<endl;
	int a = 10;
    cout << (a > 5) + (a < 15)<<endl;
	cout << (0==NULL)<<endl;
	int bruh = -10;
	cout<< (bruh? "BRUUUUH":"bruh")<<"\n";
	bool bl = (2==22);
	cout<< bl<<"\n";
	cout << static_cast<double>(1) / 2;
	int i , j, k;
	cin >> i >> j >> k;
	cout <<"Original: "<< setw(2) << i<< setw(2) << j << setw(2)<< k<<"\n";
	cout<<"Operations: " << setw(2) << ++i << setw(2)<< j++ << setw(2)<< k--<<"\n";
	cout<<"After: " << setw(2) << i << setw(2)<< j << setw(2)<< k<<"\n";
	
	return 0; 
}