#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	int i = 1;
	double courseFee = 0;
	double courseDays = 0;
	double lodgePerDay = 0;
	double lodgeFee = 0;
	string courseName = "";
	bool isPau;	
	string name;
	
	
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
	
	
	while(i != 0)
	{
		cout<<"STUDENT DETAILS: \n\n";
		cout<<"Enter full name: ";
		string name;
		getline(cin, name);
		cout<<"Are you a PAU student? (Enter \"1\" for \"YES\" and \"0\" for \"NO\")   ";
		int stud;
		cin >> stud;
		isPau = (stud==1);
		
		cout<<"What course do you want to enroll for? (Enter a number from \"1\" to \"5\")   ";
		int course;
		cin >> course;
		
		switch(course)
		{
			case 1: 
				courseFee = 10000.0;
				courseDays = 3;
				courseName = "Photography";
				break;
			case 2: 
				courseFee = 8000.0;
				courseDays = 5;
				courseName = "Painting";
				break;
			case 3: 
				courseFee = 15000.0;
				courseDays = 7;
				courseName = "Fish Farming";
				break;
			case 4: 
				courseFee = 13000.0;
				courseDays = 5;
				courseName = "Baking";
				break;
			case 5: 
				courseFee = 5000.0;
				courseDays = 2;
				courseName = "Public Speaking";
				break;
			default:
				cout<<"INVALID COURSE SELECTION!\n";
				return 1;
		}
		
		
		cout<<"Which location will you be lodging? (Enter a number from \"1\" to \"5\")   ";
		int dorm;
		cin >> dorm;
		
		switch(dorm)
		{
			case 1: 
				lodgePerDay = 10000.0;
				lodgeFee = lodgePerDay * courseDays;
				break;
			case 2: 
				lodgePerDay = 2500.0;
				lodgeFee = lodgePerDay * courseDays;
				break;
			case 3: 
				lodgePerDay = 5000.0;
				lodgeFee = lodgePerDay * courseDays;
				break;
			case 4: 
				lodgePerDay = 13000.0;
				lodgeFee = lodgePerDay * courseDays;
				break;
			case 5: 
				lodgePerDay = 5000.0;
				lodgeFee = lodgePerDay * courseDays;
				break;
			default:
				cout<<"INVALID LODGING SELECTION!\n";
				return 1;				
		}
		
		double lodgeDiscount = 0.0;
		if (isPau && (dorm == 1 || dorm == 2))
		{
			lodgeDiscount = lodgeFee * 0.05;
			lodgeFee = lodgeFee * 0.95;		
		}
		
		double courseDiscount = 0.0;	
		srand(time(0));
	    int randNum = (rand() %100) + 1;
	    
		if (courseDays > 5 || courseFee > 12000.0)
		{
			courseDiscount = courseFee * 0.03;
			courseFee = courseFee * 0.97;
		}
		
		double total = courseFee + lodgeFee;
		double promo = 0.0;	
		if (randNum == 7 || randNum == 77)
		{
			promo = 500.0;
		}
		total = total - promo;
		
		cout << "\n\nName: " << name<<"\nPAU student: "<< (isPau ? "YES" : "NO")<<"\n" ;
		cout<< "Course: "<< courseName<< "\nDays: "<< courseDays<<"\n";
		cout<< "Registration: =N= "<<courseFee<<"\t(Discount Applied: =N= "<<courseDiscount<<")\n";
		cout<<"Lodging per Day: =N= "<< lodgePerDay<<"\n"<< "Lodging: =N= "<<lodgeFee<<"\t(Discount applied: =N= "<<lodgeDiscount<<")\n";
		cout<<"Random draw: "<<randNum<<"   Promo: =N= "<<promo<<"\n" ;
		cout<<"======================================================\n";
		cout<<"Total: =N= "<<total<<"\n\n";
		
		
		cout<<"Enter 0 to end registration ===> ";
		cin>> i;
	}
	
	
	return 0;
}	