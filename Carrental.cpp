#include<iostream>
#include<string> 
#include<fstream>
#include"Carsubs.h"
#include <nlohmann/json.hpp>

// Alias for convience of saving variables to external file
using json = nlohmann::json;

//using std namespace will make it so yoiu can say cout instead of std::cout
using namespace std;

int main() 
{	
	string choiceone;
	string choicetwo;
	string choiceOneR; // the r stands for return in these two variables
	string choiceTwoR;
	// this is the test variable for the save file
	int testVar = 45;

	// create a JSON object
	json data;
	data["testVar"] = testVar;

	// Save the JSON object to a file
	ofstream outputFile("data.json");
	if(outputFile.is_open()) 
	{
		outputFile << data.dump(4); // dump with indentation of 4 spaces
		outputFile.close();
		cout << "Variables saved to file" << endl;
	}
		else 
		{
			cout << "Unable to open file for writing" << endl;
		}
	// Load the variables from the file
	ifstream inputFile("data.json");
	if (inputFile.is_open()) 
	{
		json loadedData = json::parse(inputFile);
		testVar = loadedData["testVar"];
		inputFile.close();
		cout << "Variables loaded from file:" << endl;
		cout << "testVar: " << testVar << endl;
	}
	else {
		cout << "Unable to open file for reading" << endl;
	}

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


	 
	 
	 
	 
	 