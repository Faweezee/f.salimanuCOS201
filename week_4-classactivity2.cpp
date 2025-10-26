#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	cout << "COURSE REGISTRATION FEES\n\n";
	cout<<"COURSES:\n";
	cout<<"S/N |      COURSE     | DAYS |  REGISTRATION(=N=)  |\n"<<"----------------------------------------------------\n";
	cout<<" 1  | Photography     |  3   |       10,000        |\n";
	cout<<" 2  | Painting        |  5   |        8,000        |\n";
	cout<<" 3  | Fish Farming    |  7   |       15,000        |\n";
	cout<<" 4  | Baking          |  5   |       13,000        |\n";
	cout<<" 5  | Public Speaking |  2   |        5,000        |\n\n\n";
	
	cout<<"Accommodation is available at these locations with lodging fee per day:\n";
	cout<<"S/N |      LOCATION     |  LODGING/DAY (=N=)  |\n"<<"-----------------------------------------------\n";
	cout<<" 1  |   Camp House A    |       10,000        |\n";
	cout<<" 2  |   Camp House B    |        2,500        |\n";
	cout<<" 3  |   Camp House C    |        5,000        |\n";
	cout<<" 4  |   Camp House D    |       13,000        |\n";
	cout<<" 5  |   Camp House E    |        5,000        |\n\n\n";
	
	
	cout<<"PAU is running five Short Courses during the break.\nEach course has a fixed number of days and a registration fee.\nThe courses and available accomodation are listed above.\n\n\n";
	cout<<"STUDENT DETAILS: \n\n";
	cout<<"Enter full name: ";
	string name;
	getline(cin, name);
	cout<<"Are you a PAU student? (Enter \"1\" for \"YES\" and \"0\" for \"NO\")";
	int stud;
	cin >> stud;
	bool isPau;
	
	if(stud ==1)
	{
		isPau = true;
	}
	else 
	{
		isPau = false;
	}
	
	cout<<"What course do you want to enroll for? (Enter a number from \"1\" to \"5\")";
	int course;
	cin >> course;
	cout<<"Which location will you be lodging? (Enter a number from \"1\" to \"5\")";
	int dorm;
	cin >> dorm;
	
	double courseFee;
	double courseDays;
	double lodgeFee;
	
	if (course == 1)
	{
		courseFee = 10000;
		courseDays = 3;
	}
	else if (course == 2)
	{
		courseFee = 8000;
		courseDays = 5;
	}
	else if (course == 3)
	{
		courseFee = 15000;
		courseDays = 7;
	}
	else if (course == 4)
	{
		courseFee = 13000;
		courseDays = 5;
	}
	else if (course == 5)
	{
		courseFee = 5000;
		courseDays = 2;
	}
	else
	{
		cout<<"WRONG INPUT!\n";
	}
	
	
	if (dorm == 1)
	{
		lodgeFee = 10000;
	}
	else if (dorm == 2)
	{
		lodgeFee = 2500;
	}
	else if (dorm == 3)
	{
		lodgeFee = 5000;
	}
	else if (dorm ==4)
	{
		lodgeFee = 13000;
	}
	else if (dorm == 5)
	{
		lodgeFee = 5000;
	}
	else
	{
		cout<<"WRONG INPUT!\n";
	}
	
	double total;
	
	if (isPau && (dorm == 1 || dorm == 2))
	{
		lodgeFee = lodgeFee * 0.95;
	}
	
	if (courseDays > 5 || courseFee > 12000)
	{
		courseFee = courseFee * 0.97;
	}
	
	
	
	return 0;
}	