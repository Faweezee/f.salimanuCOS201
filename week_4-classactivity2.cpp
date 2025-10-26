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
	cout<<"Are you a PAU student? (Enter \"1\" for \"YES\" and \"0\" for \"NO\")   ";
	int stud;
	cin >> stud;
	bool isPau;
	string PAU;
	
	if(stud ==1)
	{
		isPau = true;
		PAU = "Yes";
	}
	else 
	{
		isPau = false;
		PAU = "No";
	}
	
	cout<<"What course do you want to enroll for? (Enter a number from \"1\" to \"5\")   ";
	int course;
	cin >> course;
	cout<<"Which location will you be lodging? (Enter a number from \"1\" to \"5\")   ";
	int dorm;
	cin >> dorm;
	
	double courseFee;
	double courseDays;
	double lodgeFee;
	string courseName;
	
	if (course == 1)
	{
		courseFee = 10000;
		courseDays = 3;
		courseName = "Photography";
	}
	else if (course == 2)
	{
		courseFee = 8000;
		courseDays = 5;
		courseName = "Painting";
	}
	else if (course == 3)
	{
		courseFee = 15000;
		courseDays = 7;
		courseName = "Fish Farming";
	}
	else if (course == 4)
	{
		courseFee = 13000;
		courseDays = 5;
		courseName = "Baking";
	}
	else if (course == 5)
	{
		courseFee = 5000;
		courseDays = 2;
		courseName = "Public Speaking";
	}
	else
	{
		cout<<"WRONG INPUT!\n";
	}
	
	
	if (dorm == 1)
	{
		lodgeFee = 10000 * courseDays;
	}
	else if (dorm == 2)
	{
		lodgeFee = 2500 * courseDays;
	}
	else if (dorm == 3)
	{
		lodgeFee = 5000 * courseDays;
	}
	else if (dorm ==4)
	{
		lodgeFee = 13000 * courseDays;
	}
	else if (dorm == 5)
	{
		lodgeFee = 5000 * courseDays;
	}
	else
	{
		cout<<"WRONG INPUT!\n";
	}
		
	bool discountApp = false;
	double lodgeDiscount;
	if (isPau && (dorm == 1 || dorm == 2))
	{
		lodgeDiscount = lodgeFee * 0.05;
		discountApp = true;
		lodgeFee = lodgeFee * 0.95;		
	}
	
	bool CDiscountApp = false;
	double courseDiscount;
	
	srand(time(0));
    int randNum = rand() %100;
    
	if (courseDays > 5 || courseFee > 12000)
	{
		courseDiscount = courseFee * 0.3;
		CDiscountApp = true;
		courseFee = courseFee * 0.97;
	}
	
	double total = courseFee + lodgeFee;
	int promo = 0;
	
	if (randNum == 7 || randNum == 77)
	{
		total = total - 500;
		promo = 500;
	}
	
	cout << "Name: " << name<<"   (PAU student: "<< PAU<<")\n" ;
	cout<< "Course: "<< courseName<< "    Days: "<< courseDays<<"\n";
	cout<< "Registration: =N="<<courseFee;
	if(CDiscountApp)
	{
		cout<<"    (Discount Applied: =N="<<courseDiscount<<")\n";
	}
	else{
		cout<<"\n";
	}
	cout<< "Lodging: =N="<<lodgeFee;
	if(discountApp)
	{
		cout<<"    (Discount applied: =N="<<lodgeDiscount<<")\n";
	}
	else{
		cout<<"\n";
	}
	cout<<"Random draw: "<<randNum<<"   Promo applied: "<<promo<<"\n" ;
	cout<<"Total: =N="<<total;
	
	return 0;
}	