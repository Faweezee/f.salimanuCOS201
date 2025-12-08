#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	// ofstream ==> write to a file (output)
	// ifstream ==> Read from a file (input)
	// fstream  ==>  Read and write
	
	//outfile, infile and file are variable names, referring to the path of our file
	// ifstream and ofstream only take one arguement name/path of the file
	
	//output to file
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
	
	
	// Reading input from file
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
	
	
	//						fstream
	//						output
	//				ios::out ==> writing mode
	// There are two writing modes: Append and Truncate
	//				ios::app   ==> append mode, appends text
	//				ios::trunc ==> truncate mode, erase the file before writing
	
	//						input
	//				ios::in   ==>  reading mode
	
	fstream file("data.txt", ios::out | ios::app);
	file<<"Please, add this new line\n";
	file.close();
	cout<<"DONE\n";
	
	
	// Reading integers from files
	ifstream in_file("data2.txt");
	if(!in_file)
	{
		cout<<"File cannot be opened";
		return 0;
	}
	int number;
	int sum;
	int max = 0;
	while (in_file >> number)
	{
		if (number > max) max = number;
		sum += number;
		cout<< number<<endl;
	}
	cout<< "The sum is sum: "<<sum<<endl;
	cout<< "The max numebr is: "<<max<<endl;
	in_file.close();
	
	
	return 0;
}