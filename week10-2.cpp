#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
using namespace std;

int getSize(string name)
{
	int count =0;
	int number;
	ifstream file(name);
	
	while (file >> number) 
	{
		count++;
	}
	return count;
}

int* numberArray(string name, int size)
{
	int number;
	ifstream file(name);	
	int* list = new int[size];
	
	if(!file) return list;
	
	int idx = 0;
	while (file >> number)
	{
		list[idx] = number;
		idx++;
	}
	
	file.close();
	return list;
}

void nPrintArray(int list[], int size)
{
	for (int i = 0; i<=size-1; i++)
	{
		cout<<list[i]<<"\t";
	}
}

int main()
{
	
	/*
	Practice/learn: read data from csv, read data from tables from csv into different arrays
	prompt: In C++ class we learnt file handling, we learnt to write to a file, read text and numbers from a file and append text to a file.
	Give me questions to practice this, from practicing what i was taught in class to creating functions related to this 
	and other questions to help me improve my skills.
	*/
	
	
//	Reading integers from files
	
	ifstream infile("data2.txt");
	if(!infile)
	{
		cout<<"File cannot be opened";
		return 0;
	}
	int number;
	int sum =  0;int max = 0;
	while (infile >> number)
	{
		if (number > max) max = number;
		sum += number;
		cout<< number<<endl;
	}
	cout<< "The sum is sum: "<<sum<<endl;
	cout<< "The max numebr is: "<<max<<endl;
	infile.close();
	
	int arraySize = getSize("data3.txt");
	int* myArray = new int[arraySize];
	myArray = numberArray("data3.txt", arraySize);
	nPrintArray(myArray, arraySize);


return 0;
}