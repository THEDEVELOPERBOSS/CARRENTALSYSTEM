#include<iostream>
#include<string> 
#include<fstream>
#include"Carsubs.h"
#include"restart.h"
#include <nlohmann/json.hpp> // this needs to be reinstalled I think 
// Alias for conveniance
using json = nlohmann::json;

//using std namespace will make it so you can say cout instead of std::cout
using namespace std;

int main() 
{	
	string choiceone;
	string choicetwo;
	string choiceOneR; // the r stands for return in these two variables
	string choiceTwoR;


while (true) {
	 cout << "Are you are customer or employee?\n Type 'Customer' for customer and 'Employee' for employee or type test for the test variable\n";
	 getline (cin, choiceone);
		if (choiceone == "Employee")
		{
			cout << submenue();
			choiceone = choiceOneR;
		}
		else if (choiceone == "R")
		{
			cout << "Starting over. ";
			// figure out how to make a time delay like in the hacker python program
			choiceone = choiceOneR;
			restart();
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
				else if(choicetwo == "R")
				{
					restart();
			}
				else {
					cout << "That is not valid";
				}
				choicetwo = choiceTwoR;
		}
		else if (choiceone == "test") 
		{
			cout << "This is what it currently equals: " << "Depricate this";
			cout << "Change it too:";
			// cin >> testVar;
		}
			else
			{
				cout << "Please try again";
				choicetwo = choiceTwoR;
			}
		}
		
		cout << "Goodbye\n";
}


	 
	 
	 
	 
	 