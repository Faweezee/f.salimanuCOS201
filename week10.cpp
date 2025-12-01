#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	// ofstream ==> write to a file (output)
	// ifstream ==> Read from a file (input)
	// fstream  ==>  Read and write
	
	ofstream outfile("data.txt");
	// creates a file data.txt in the same directory ad the source code
	if(!outfile)
	{
		cout<<"Error opening this file";
		return 0;
	}
	
	outfile << "Welcome to C++ class\n";
	outfile << "This is file handling class\n";
	outfile.close();
	
	ifstream infile("data.txt");
	if(!infile)
	{
		cout << "Cannot open file";
		return 0;
	}
	string line;
	int count = 0;
	while(getline(infile, line))
	{
		cout<<line<<endl;
		count++;
	}
	infile.close();
	cout<<"The number of lines is "<<count<<endl;
	
	return 0;
}