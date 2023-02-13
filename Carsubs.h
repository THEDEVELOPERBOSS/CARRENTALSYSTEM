#include<iostream>
using namespace std;
string Raptor = "Ford Raptor";
	 string Jeep = "Jeep Cheorkee";
	 string Charger = "Dodge Charger";
	 string Rstatus = "Available";
	 string Jstatus = "Available";
	 string Cstatus = "Not Currently Available";
   string caroneN = "car"; 
   string caroneY = "0000";
   string carReturn = "Car";
   string caroneYc = "0000";
   string caroneNc = "car"; 
   string eChoice = "a";
   const int code = 2681; // this is the password that employees will need to enter to add cars and ______ etc;
   int choiceOne = 0;

char submenurn() {
  cout << "What is the car that you are returning?\n ";
   cin >> carReturn;
  return 0;
 }

 char submenure() {
  cout << "These are the cars:\n";
					cout << Raptor << "is currently " << Rstatus << " \n"; 
					cout << Jeep << " is currently " << Jstatus << " \n";
					cout << Charger << "is currently " << Cstatus << " \n";
					cout << "Type what car you would like to rent" << " \n";
          return 0;
 }   

 char submenue() {
    cout << "What is the code?\n";
    cin >> choiceOne;
    if (choiceOne == code) {
      cout << "That is correct\n";
      cout << "type "

    }
    switch(choiceOne) {

      
    }
    if (code) {
      cout << "Type the info for the car you are adding. \n";

      if (caroneN == caroneNc || caroneY == caroneYc) {
       cout << "What is the name of the car you are adding?: ";
       cin >> caroneN;
       cout << "What is the year model of the car you are adding: ";
       cin >> caroneY;
      }
      return 0;
    }
    
    

    else {
      cout << "You currently have no more car slots available if you would like more please contact the developers and you will get an update within 6 hours";
    }
    return 0;
 }