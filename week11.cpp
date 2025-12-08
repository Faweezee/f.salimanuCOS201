#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void PrintArray(int rows, int cols,int arr[][])
{
	for (int i=0; i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<"\n";
	}
}

int main()
{
	int array_1D[5] = {5,10,15,20,25};
	int array_2D[5][5];
	array_2D[0][0] = 1;
	
	
	int matrix[3][3] = 
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};	
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<<"\t";
		}		cout<<"\n";
	}
	
	//randomly generating a 2D array
	srand(time(0));
	int rowNum = 5;
	int colNum = 3;
	int array[rowNum][colNum];
	for (int i=0; i < rowNum;i++)
	{
		for(int j=0;j<colNum;j++)
		{
			array[i][j] = rand() % 21;
		}
	}
	//getting the max sum from the rows and the row index
	int maxIdx = 0;
	int sum;
	int maxSum =0;
	for (int i=0; i < rowNum;i++)
	{
		sum = 0;
		for(int j=0;j<colNum;j++)
		{
			sum += array[i][j];
		}
		if(sum>maxSum)
		{
			maxSum = sum;
			maxIdx = i;
		}
	}
	cout<<"The row with the max sum is therow with index: "<<maxIdx<<" and the sum is: "<<maxSum;
	PrintArray(rowNum, colNum, array);
	
	
	return 0;
}