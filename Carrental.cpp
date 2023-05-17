#include<iostream>
#include<string> 
#include"Carsubs.h"
//using std namespace will make it so yoiu can say cout instead of std::cout
using namespace std;

int main() 
{	
	string choiceone;
	string choicetwo;
	string choiceOneR; // the r stands for return in these two variables
	string choiceTwoR;
while (true) {
	 cout << "\nType R to go back to the begining at any time\n";
	 cout << "Are you are customer or employee?\n Type 'Customer' for customer and 'Employee' for employee\n";
	 getline (cin, choiceone);
		if (choiceone == "Employee")
		{
			cout << submenue();
			choiceone = choiceOneR;
		}
		else if (choiceone == "R")
		{
			cout << "Starting over";
			choicetwo = choiceTwoR;
		}
		else if (choiceone == "Customer"){
			cout << "Are returning a car or renting a car?\n Type Returning for returning a car and Renting for renting a car.\n";
			getline (cin, choicetwo);
				if(choicetwo == "Renting")
				{
					submenure();
				}
				else if(choicetwo == "Returning")
				{
					submenurn();
				}
				else {
					cout << "That is not valid";
				}
				choicetwo = choiceTwoR;
		}
			else
			{
				cout << "Please try again";
				choicetwo = choiceTwoR;
			}
		}
		
		cout << "Goodbye\n";
}


	 
	 
	 
	 
	 