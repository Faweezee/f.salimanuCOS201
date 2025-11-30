#include <iostream>
#include <string>
#include <string>
using namespace std;

int max(int num1, int num2)
{
	int max_numb;
	if(num1>num2) max_numb=num1;
	else max_numb = num2;
	
	return max_numb;
}

void nprint(string name)
{
	cout<< name;
}

void nprint_m(string str, int i)
{
	for (int j = 1; j<=i; j++)
	{
		cout<<str<<"\n";
	}
}

int main()
{
	cout << max(122,24)<<endl;
	nprint_m("Welcome to C++ class", 5);
	
	
	return 0;
}