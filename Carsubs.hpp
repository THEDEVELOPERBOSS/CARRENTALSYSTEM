#include<iostream>
#include<string>
#include<fstream>
#include"variables.hpp"
#include<nlohmann/json.hpp>
using namespace std;
// Alias for conveniance
using json = nlohmann::json;

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

 

codeChecker();