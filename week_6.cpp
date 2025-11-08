#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<"Multiplication Table\n"<<"=========================\n";
	cout<<"  |";
	for(int i =1; i<13; i++)
	{
		cout<<setw(4)<<i;
	}
	cout<<"\n-----------------------------------------------------";
	for(int i =1; i<13; i++)
	{
		cout<<"\n"<< i <<" |";
		for (int j = 1; j<13; j++)
		{
			cout<< setw(4)<< i*j;
		}
	}
	cout<< "\n\n";
	
	
	int day;		
	cout<< "Enter the day ===>";
	cin >> day;
	switch(day)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5: 
			cout << "Weekday\n";
			break;
		case 0:
		case 6: 
			cout<<"Weekend\n";
			break;
	}

	
	int year;
	cout<<"Enter year ===>";
	cin >> year;
	year = year%12;
	switch(year)
	{
		case 0:
			cout<< "Chinese Zodiac: Monkey\n";
			break;
		case 1:
			cout<< "Chinese Zodiac: Rooster\n";
			break;
		case 2:
			cout<< "Chinese Zodiac: Dog\n";
			break;
		case 3:
			cout<< "Chinese Zodiac: Pig\n";
			break;
		case 4:
			cout<< "Chinese Zodiac: Rat\n";
			break;
		case 5:
			cout<< "Chinese Zodiac: Ox\n";
			break;
		case 6:
			cout<< "Chinese Zodiac: Tiger\n";
			break;
		case 7:
			cout<< "Chinese Zodiac: Rabbit\n";
			break;
		case 8:
			cout<< "Chinese Zodiac: Dragon\n";
			break;
		case 9:
			cout<< "Chinese Zodiac: Snake\n";
			break;
		case 10:
			cout<< "Chinese Zodiac: Horse\n";
			break;
		case 11:
			cout<< "Chinese Zodiac: Sheep\n";
			break;
	}
	
	int i =1;
	int sum = 0;
	while (i<=9)
	{
		sum += i;
		cout<< "When i = "<<i<<" sum is: "<< sum<<"\n";
		i++;
	}
	cout<< "Sum is "<<sum<<"\n\n\n";
	
	
	int sum2 = 0;
	for(int i = 0; i < 100; i++)
	{
		sum2 += i;
	}	
	cout<< "Sum2 is "<<sum2<<"\n\n\n";
	
	int sum3 = 0;
	for (int i = 1; i<=5; i++)
	{
		for (int j = 2; j<=3; j++)
		{
			sum3 = sum3 + i + j;
		}
	}
	cout<< "Sum3 is "<<sum3<<"\n\n\n";
	
	int prod =1;
	for (int i =1; i<=5; i++)
	{
		for(int j = 2; j<=4; j++)
		{
			prod = prod * i * j;
		}
	}
	cout<< "Product is "<<prod<<"\n\n\n";
	
	
	return 0;
}