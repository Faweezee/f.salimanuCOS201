#include <iostream>
using namespace std;

bool verifyPin(int correctPin)
{
	int inputPin, count = 1;
	bool success = false;
	
	cout<<"ENTER PIN\t===> ";
	cin>>inputPin;
	if (inputPin == correctPin) success = true;
	count ++;
	
	while (count<=3 && !success)
	{
		cout<<"WRONG PIN!\n";
		cout<<"ENTER PIN\t===> ";
		cin>>inputPin;
		if (inputPin == correctPin) success = true;
		count ++;
	}
	
	if(!success)
	{
		cout<<"\"Account Locked. Please contact your bank.\"";
	}
	
	return success;
}

void displayMenu()
{
	cout<<"\n\n======== ATM MENU ========\n"<<"\t1. View Balance\n"<<"\t2. Deposit Cash\n";
	cout<<"\t3. Withdraw Cash\n"<<"\t4. Reset PIN\n"<<"\t5. Exit\n"<<"Enter your choice: ";
}

double viewBalance(double balance)
{
	cout<<balance<<"\n\n";
	return balance;
}

double depositMoney(double balance)
{
	double amt;
	cout<<"ENTER DEPOSIT AMOUNT: ";
	cin >> amt;
	if (amt >0.0) balance += amt;
	return balance;
}

double withdrawMoney(double balance, double dailyLimit)
{
	double amt;
	cout<<"ENTER WITHDRAWAL AMOUNT: ";
	cin >> amt;
	if(amt<= balance)
	{
		if(amt<= dailyLimit)
		{
			balance -= amt;
		}
		else cout<<"DAILY LIMIT EXCEEDED"<<"\n\n";
	}
	else cout<<"INSUFFICIENT BALANCE"<<"\n\n";
	
	return balance;
}

int resetPin(int currentPin)
{
	int input;
	cout<<"ENTER NEW PIN: ";
	cin>> input;
	return input;
}


int main()
{
	double accountBalance = 50000.0, dailyLimit = 20000.0;
	int choice, pin = 4321;
	bool terminate = false;
	
	do
	{
		if (!verifyPin(pin)) return 0;
		displayMenu();
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				viewBalance(accountBalance);
				break;
			case 2:
				depositMoney(accountBalance);
				break;
			case 3:
				withdrawMoney(accountBalance, dailyLimit);
				break;
			case 4:
				pin = resetPin(pin);
				break;
			case 5:
				cout<<"Thank you for using our ATM.";
				terminate = true;
				break;
			default:
				cout<<"INVALID INPUT\n"<<"Thank you for using our ATM.";
				terminate = true;
				break;
			
		}
	}while(!terminate);
	
	
	return 0;
}