#include<iostream>
#include<string>
#include<nlohmann/json.hpp>
#include<fstream>
using namespace std;

// these are the variables
string Raptor = "Ford Raptor";
string shorterR = "Raptor"; // these are the shorter versions of the car names used in the return program as main use
string Rstatus = "Available";
int Ryear = 2020; // year model
string rName;     // renters first name
string rLame; // renters last name
int rDay = 0;
int rMonth = 0;
int rYear = 0;
int rDayRE = 0; // this are the dates that the cars are returned. RE = Returned
int rMonthRE = 0;
int rYearRE = 0;
//(above) variables for the Ford Raptor
//(below) variables for the Jeep Cherokee
string Jeep = "Jeep Cheorkee";
string shorterJ = "Jeep";
string Jstatus = "Available";
int Jyear = 2001; // year model
string jName; // renters first name
string jLame; // renters last name
int jDay = 0; 
int jMonth = 0;
int jYear = 0;
int jDayRE = 0;
int jMonthRE = 0;
int jYearRE = 0;
//(below) variables for the Dodge Charger
string Charger = "Dodge Charger";
string shorterC = "Dodge";
string Cstatus = "Available";
int Cyear = 2016;
string cName; // this variable set will allow me to check the name of the renter to make sure it's the right person
string cLame; // renters last name
int cDay = 0;
int cMonth = 0;
int cYear = 0;
int cDayRE = 0;
int cMonthRE = 0;
int cYearRE = 0;
// (below) variables for the first car to add
string caroneB;
string caroneBC;
string caroneYC;
string caroneY; // year model of car
string caroneNC;
string caroneN; // name of car
string oStatus = "Available";
string caroneRN; // the renters name
int oDay = 0;
int oMonth = 0;
int oYear = 0;
int oDayRE = 0;
int oMonthRE = 0;
int oYearRE = 0;
//(below) variables for the second car to add
string cartwoB;
string cartwoBC;
string cartwoYC; // these two just help verify that there is nothing else
string cartwoY;  // year model of car
string cartwoNC;
string cartwoN;  // name of car
string cartwoRN; // the renters name
string tStatus = "Available";
int tDay = 0;
int tMonth = 0;
int tYear = 0;
int tDayRE = 0;
int tMonthRE = 0;
int tYearRE = 0;
// Employee code variables
string code = "2681"; // this is the password that employees will need to enter to add cars and ______ etc;
string codeChoice = "0";
string nCode; // the variable for the new pin
string cChange = "Change the pin";
int nAttempts = 5; // this is a variable that will store the number of attempts allowed and it can be changed by the employee or manager
int counter = 0;   // this is a variable to count how many times they have entered the passcode incorreclty

// choosing what car (below)
// etc
string carWant;
string carReturn = "Car";
string eChoice = "a";

// the available or not available variables
string nVail = "Not Currently Available";
string aVail = "Available";

string DateR = "00/00/00"; // this will allow us to reset the car date variable so the program can run multiple times
string eChoicetwo;
string rChoice = "<Blank>";          // this variable and the one below it is for choices that are simple that I will use from now on the one below will reset this one
const string rChoiceR = "<Blank>";   // the const will make it so the variable can never be changed. This will reset the above one once it has served it's purpose
                                     // this is the return function
string Name;
string lName;                         // this is so I don't have to make an if thing to check the name every time
string NameR = "<BLANK>";                        // this will allow me to set the name back to what it was before
string caroneFN = caroneB + caroneN; // these are the full names of the car
string cartwoFN = cartwoB + cartwoN;

// restart variables
string wishToRestart = "<Blank>";  
string wishY = "Yes"; 
string wishN = "No";
string rVar = "R";


