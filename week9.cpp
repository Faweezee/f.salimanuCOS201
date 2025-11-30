#include <iostream>
using namespace std;


/*
i. minimum with its index
ii. maximum with its index
iii. search for an element in an array using : linear search and binary search alg
*/
int minElement(int list[], int size);
int maxElement(int list[], int size);

void readArray(int list[], int size)
{
	for (int i = 0; i <=size-1; i++)
	{
		cout<<"Enter a value for index "<<i<<": ";
		cin>>list[i];
	}
}

void nPrintArray(int list[], int size)
{
	for (int i = 0; i<=size-1; i++)
	{
		cout<<list[i]<<"\t";
	}
}

int addArray(int list[], int size)
{
	int sum = 0;
	for (int i= 0; i<= size-1; i++)
	{
		sum += list[i];
	}
	return sum;
}

int main()
{
	int size = 5;
	int arr[size] = {1,3,4,5,8};
	// int arr[5] = {1,3,4,5,8};
	// int arr[] {1,3,4,5,8};
	// int arr[] = {1,3,4,5,8};
	/* int arr[size];
	arr[0] = 1;
	arr[1] = 3;
	arr[2] = 4;
	arr[3] = 5;
	arr[4] = 8;
	*/
	minElement(arr, size);
	maxElement(arr, size);
	int sum = arr[0] + arr[4];
	cout<< "Sum of arr[0] + arr[4] = "<<sum<<endl;
	//to get the length of an array
	int length = sizeof(arr)/sizeof(arr[0]);
	cout<<"Length from calculation: " <<length<<"\tActual length: "<<size<<"\t(size == length)"<<(size == length)<<"\n";
	
	for (int i = 0; i<= size-1; i++)
	{
		cout<<arr[i]<<"\n";
	}
	
	int arr2[50];
	int inputSize;
	cout<<"Please enter the size of the array ===> ";
	cin>> inputSize;	
	
	readArray(arr2, inputSize);
	nPrintArray(arr2, inputSize);
	int result = addArray(arr2, inputSize);
	cout<<"The sum of the elements in the Array is : "<<result<<"\n";
	
	//read in a value for each element
	/* replaced by readArray() function
	for (int i = 0; i<=inputSize-1; i++)
	{
		cout<<"Enter a value for index "<<i<<": ";
		cin>>arr2[i];
	}
	*/	
	
	/* replaced by nPrintArray() function
	for (int j = 0; j<= inputSize-1; j++)
	{
		cout<<arr2[j]<<"\t";
	} 
	*/
	
	return 0;
}

int minElement(int list[], int size)
{
	int min = list[0];
	int minIdx = 0;
	for (int i =1; i<=size-1; i++)
	{
		if (min > list[i])
		{
			min = list[i];
			minIdx = i;
		}
	}
	cout<<"The minimum element in the array is: "<<min<<"\n";
	return minIdx;
}

int maxElement(int list[], int size)
{
	int max = list[0];
	int maxIdx = 0;
	for (int i =1; i<=size-1; i++)
	{
		if (max < list[i])
		{
			max = list[i];
			maxIdx = i;
		}
	}
	cout<<"The max element in the array is: "<<max<<"\n";
	return maxIdx;
}