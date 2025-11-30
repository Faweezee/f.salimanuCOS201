#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// ???
int main()
{
	string name;
	string adminStatus;
	int jambScore, age, hostel, r;
	double tuitionScholarshipP, waecScore;
	int inpt, inpt2;
	bool isFirstChoice, hasRecord, isPrime;
	int baseTuition = 1500000, grant = 0,tuitionAfterScholarship = 0, totalPayable = 0, hostelFee = 0, tuitionScholarship = 0;
	
	cout<<setw(20) <<"PAU ADMISSION\n\n";
	cout<<"USER DETAILS:\n"<<"-------------\n";
	cout<<"ENTER FULL NAME ===> ";
	getline(cin, name);
	cout<<"ENTER JAMB SCORE (0-400) ===> ";
	cin>>jambScore;
	cout<<"ENTER WEAC AVERAGE (0-100) ===> ";
	cin>>waecScore;
	cout<<"ENTER AGE (years) ===> ";
	cin>>age;
	cout<<"\t\t\tYES=1 / NO=0\n";
	cout<<"IS PAU YOUR FIRST CHOICE? (1/0) ===> ";
	cin>>inpt;
	isFirstChoice = (inpt==1);
	cout<<"DO YOU HAVE A DISCIPLINARY RECORD? ===> ";
	cin>>inpt2;
	hasRecord = (inpt2==1);
	cout<<"\nAvailable Hostels :\n\t1 = Main Hostel (=N= 180,000)\n\t2 = Annex Hostel (=N= 120,000)\n\t3 = Day Student (=N= 0)\n";
	cout<<"WHAT IS YOUR HOSTEL CHOICE? (1-3))===> ";
	cin>>hostel;
		
	if(hasRecord||age<=15)
	{
		adminStatus="Rejected";
	}
	else if( ((jambScore >=220 && waecScore >= 60) && isFirstChoice ) || (jambScore >=200 && waecScore >= 70))
	{
		adminStatus = "Admitted";
	}
	else{
		adminStatus = "Pending";
	}
	
	if(adminStatus == "Admitted")
	{
		if (jambScore>=320)
		{
			tuitionScholarship = 30;
		}
		else if (jambScore>=280)
		{
			tuitionScholarship = 20;
		}
		else if (jambScore>=240)
		{
			tuitionScholarship = 10;
		}
		else
		{
			tuitionScholarship = 0;
		}
		
		if (waecScore >=80 && isFirstChoice)
		{
			tuitionScholarship = tuitionScholarship + 5;
		}
		
		tuitionScholarshipP = tuitionScholarship/100.0;
	}
	
	if(adminStatus == "Admitted" && !hasRecord)
	{
			switch(hostel)
		{
			case 1:
				hostelFee = 180000;
				break;
			case 2:
				hostelFee = 120000;
				break;
			case 3:
			default:
				hostelFee = 0;
				break;
		}
	}
	else
	{
		hostelFee = 0;
	}
	
	srand(time(0));
	r = (rand()%100) +1;
	isPrime= (r==2 || r==3 || r==5 || r==7 || r==11 || r==13 || r==17 || r==19 || r==23 || r==29 || r==31 || r==37 || r==41 || r==43 || r==47 || r==53 || r==59 || r==61 || r==67 || r==71 || r==73 || r==79 || r==83 || r==89 || r==97);
	if (isPrime) grant = 50000;
	if(adminStatus == "Admitted")
	{
		tuitionAfterScholarship = baseTuition*(1-tuitionScholarshipP);
		totalPayable = tuitionAfterScholarship + hostelFee - grant;
		if (totalPayable<0) totalPayable = 0;
	}
	cout<<"\n\n";
	cout<<"Name: "<<name<<"\n";
	cout<<"Admission Status: "<<adminStatus<<"\n";
	cout<<"Scholarship: "<<tuitionScholarship<<"% \t\tTuition After Scholarship: =N= "<<tuitionAfterScholarship<<"\n";
	cout<<"Hostel: ";
	if(adminStatus == "Admitted")
	{
			switch(hostel)
		{
			case 1:
				cout<<"Main\t\t";
				break;
			case 2:
				cout<<"Annex\t\t";
				break;
			case 3:
				cout<<"Day\t\t";
				break;
			default:
				cout<<"(INVALID INPUT) Day\t\t";
				break;
		}
	}
	else if(adminStatus=="Pending") cout<<"On Hold\t\t";
	else cout<<"Not Applicable\t\t";
	
	cout<<"Fee: =N= "<<hostelFee<<"\n";
	cout<<"Random Draw: "<<r<<"\t\t\t\tMerit Grant: =N= "<<grant<<"\n";
	cout<<"TOTAL PAYABLE: =N= "<<totalPayable;
	
	
	
	return 0;
}