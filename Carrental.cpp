#include<iostream>
#include<string> 
#include<fstream>
#include"variables.hpp"
#include"employees.hpp"
#include"restart.hpp"
#include"return.hpp"
#include"renting.hpp"
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
				cout << "Please try again ";
				choicetwo = choiceTwoR;
			}
		}
		
		cout << "Goodbye\n";
}
using namespace std;
// Alias for conveniance
using json = nlohmann::json;
// variables that aren't working in variables.hpp
// Employee code varibles

int mainSubs()
{
// JSON Stuff
// Create a JSON object
vector<json> jsonRaptor = {
  {
    {"Rstatus", "Available"}
  }
};
// convert more variables to JSON ones once this works
json raptorData;
raptorData["car"] = "Ford Raptor";
raptorData["year model"] = 2021;
raptorData["available"] = "True";

//open the ouput file for reading
ofstream outputFile("outputSubs.json");

if(outputFile.is_open())
{
  // Write the JSON object to the file
  outputFile << raptorData.dump(4); // dump with indentation of 4 spaces

  // close the file
  outputFile.close();

  // Open the file for reading
  ifstream inputFile("ouput.json");

  if (inputFile.is_open())
  {
    // Read the contents of the file into a JSON object
    json jsonData;
    inputFile >> jsonData;

    // close the file
    inputFile.close();
    
    // Access and manipulate the JSON data
    string Rstatus = jsonData["Rstatus"];
    // what variables I make up there I have to make down here


  }else 
  {
    cout << "Failed to open file for reading" << endl;
  }
}else 
  {
    cout << "Failed to open file for writing" << endl;
  }
  return 0;

}

int dateRE = 0; // this will allow me to reset the int variables quickly





// codeChecker(); add this back in when ready

	 
	 
	 
	 
	 