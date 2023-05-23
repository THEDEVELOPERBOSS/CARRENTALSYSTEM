#include <iostream>
#include <string>
using namespace std;
// these are the variables
string Raptor = "Ford Raptor";
string Rstatus = "Available";
int Ryear = 2020; // year model
string rName;     // renters name
int rDay = 0;
int rMonth = 0;
int rYear = 0;
int rDayRE = 0; // this are the dates that the cars are returned. RE = Returned
int rMonthRE = 0;
int rYearRE = 0;
//(above) variables for the Ford Raptor
//(below) variables for the Jeep Cherokee
string Jeep = "Jeep Cheorkee";
string Jstatus = "Available";
int Jyear = 2001; // year model
string Jname;
int jDay = 0;
int jMonth = 0;
int jYear = 0;
int jDayRE = 0;
int jMonthRE = 0;
int jYearRE = 0;
//(below) variables for the Dodge Charger
string Charger = "Dodge Charger";
string Cstatus = "Available";
int Cyear = 2016;
string Cname; // this variable set will allow me to check the name of the renter to make sure it's the right person
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
// code variables
string code = "2681"; // this is the password that employees will need to enter to add cars and ______ etc;
string codeChoice = "0";
string nCode; // the variable for the new pin
string cChange = "Change the pin";
int counter = 0;   // this is a variable to count how many times they have entered the passcode incorreclty
int nAttempts = 5; // this is a variable that will store the number of attempts allowed and it can be changed by the employee or manager
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
string Name;                         // this is so I don't have to make an if thing to check the name every time
string NameR;                        // this will allow me to set the name back to what it was before
string caroneFN = caroneB + caroneN; // these are the full names of the car
string cartwoFN = cartwoB + cartwoN;

int dateRE = 0; // this will allow me to reset the variables quickly
char submenurn()
{

  cout << "What is the car that you are returning?\n";
  getline(cin, carReturn);
  if (carReturn == Raptor || "Raptor")
  {
    cout << "What is your name?\n";
    getline(cin, Name);
  }
  else if (carReturn == Jeep)
  {
    cout << "What is your name?\n";
    getline(cin, Name);
  }
  else if (carReturn == Charger)
  {
    cout << "What is your name?\n";
    getline(cin, Name);
  }
  else if (carReturn == caroneFN)
  {
    cout << "What is your name?\n";
    getline(cin, Name);
  }
  else if (carReturn == cartwoFN)
  {
    cout << "What is your name\n";
    getline(cin, Name);
  }
  else {}
  // make sure for all of them it asks for their names
  if (Name == rName & Rstatus == nVail)
  {
    cout << "What is todays date?: ";
    cin >> rMonth;
    cout << "";
    cin >> rDay;
    cout << "";
    cin >> rYear;
    cout << "The " << Raptor << " has been returned in our systems";
    Rstatus = aVail;
    rName = "<BLANK>";
  }
  else if (Name == Jname & Jstatus == nVail)
  {
    cout << "The " << Jeep << " has been returned in our systems";
    Jstatus = aVail;
    Jname = "<BLANK>";
  }
  else if (Name == Cname & Cstatus == nVail)
  {
    cout << "The " << Charger << " has been returned in our systems";
    Cstatus = aVail;
    Cname = "<BLANK>";
  }
  else if (Name == caroneRN & oStatus == nVail)
  {
    cout << "The " << caroneFN << " has been returned in our systems";
    oStatus = aVail;
    caroneRN = "<BLANK>";
  }
  else if (Name == cartwoRN & tStatus == nVail)
  {
    cout << "The " << cartwoFN << " has been returned in our systems";
    tStatus = aVail;
    cartwoRN = "<BLANK>";
  }
  else
  {
    cout << "Your name does not match the one we have registered in our systems";
  }
  carReturn = "<BLANK>";
}

// this is the menu that will run if an employee or customer is returnig a car to the system
char submenure()
{
  cout << "These are the cars:\n";

  if (caroneB != caroneBC & caroneY != caroneYC & caroneN != caroneNC & cartwoB != caroneBC & caroneY != caroneYC & cartwoN != caroneNC)
  {
    cout << caroneB << " " << caroneN << " is " << oStatus << " Type: " << caroneN << "\n";
    cout << cartwoB << " " << cartwoN << " is " << tStatus << " Type: " << cartwoN << "\n";
  }
  else if (caroneB != caroneBC & caroneY != caroneYC & caroneN != caroneNC & cartwoB == cartwoBC & cartwoY == cartwoYC & cartwoN == cartwoNC)
  {
    cout << caroneB << " " << caroneN << " is " << oStatus << " Type: " << caroneN << "\n";
  }
  else if (cartwoB != cartwoBC & cartwoY != cartwoYC & cartwoN != cartwoNC & caroneB == caroneBC & caroneY == caroneYC & caroneN == caroneNC)
  {
    cout << cartwoB << " " << cartwoN << " is " << tStatus << " Type: " << cartwoN << "\n";
  }
  else
  {
  }

  cout << Raptor << " is " << Rstatus << " Type: Raptor"
       << " \n";
  cout << Jeep << " is " << Jstatus << " Type: Cheorkee"
       << " \n";
  cout << Charger << " is " << Cstatus << " Type: Charger"
       << " \n";
  cout << "Type what car you would like to rent "
       << " \n";

  getline(cin, carWant);
  if (carWant == "Raptor" & Rstatus == aVail)
  {
    cout << "Please enter today's date. MM/DD/YY\n";
    cin >> rMonth;
    cout << "";
    cin >> rDay;
    cout << "";
    cin >> rYear;
    cout << "What is your name?\n";
    getline(cin, rName);
    cout << "Please return the car within one month\n";
    Rstatus = nVail;
  }
  else if (carWant == "Jeep" & Jstatus == aVail)
  {
    cout << "Please enter today's date. MM/DD/YY\n";
    cin >> jMonth;
    cout << "";
    cin >> jDay;
    cout << "";
    cin >> jYear;
    cout << "Please return it in a month max\n";
    Jstatus = nVail;
  }
  else if (carWant == "Charger" & Cstatus == aVail)
  {
    cout << "Please enter today's date. MM/DD/YY\n";
    cin >> cMonth;
    cout << "";
    cin >> cDay;
    cout << "";
    cin >> cYear;
    cout << "What is your name?\n";
    getline(cin, Cname);
    cout << "Please return the car within one month\n";
    Cstatus = nVail;
  }
  else if (carWant == caroneN & oStatus == aVail)
  {
    cout << "Please enter today's date. MM/DD/YY\n";
    cin >> oMonth;
    cout << "";
    cin >> oDay;
    cout << "";
    cin >> oYear;
    cout << "What is your name?\n";
    getline(cin, caroneRN);
    cout << "Please return the car within one month\n";
    oStatus = nVail;
  }
  else if (carWant == cartwoN & tStatus == aVail)
  {
    cout << "Please enter today's date. MM/DD/YY\n";
    cin >> tMonth;
    cout << "";
    cin >> tDay;
    cout << "";
    cin >> tYear;
    cout << "What is your name";
    getline(cin, cartwoRN);
    cout << "Please return the car within one month\n";
    tStatus = nVail;
  }
  else
  {
    cout << "That is not valid\n";
    cout << "Please try again or call an Employee over to help you\n";
    return 0;
  }
  return 0;
}

// This is the menu that will run if e is typed (employee)
char submenue()
{
  cout << "What is the code?\n";
  cin >> codeChoice;
  if (codeChoice == code)
  {
    cout << "That is correct\n";
    cout << "Are you adding a car(Car) changing the pin(Pin) reviewing return dates(Dates) or changing the number of attempts allowed for the pin(Attempts): ";
    cin >> eChoicetwo;
    if (eChoicetwo == "Code")
    {
      cout << "What would you like to change the code too?:";
      cin >> nCode;
      code = nCode;
    }
    else if (eChoicetwo == "Car")
    {
      cout << "Type the info for the car you are adding. \n";
      if (caroneN == caroneNC || caroneY == caroneYC || caroneB == caroneBC) // the c in the variables stand for check
      {
        getline(cin, rChoice);
        rChoice = rChoiceR;
        cout << "What is the Brand of the car you are adding?: \n";
        getline(cin, caroneB);
        cout << "What is the model of the the car you are adding?: \n";
        getline(cin, caroneN);
        cout << "What is the year model of the car you are adding: \n";
        getline(cin, caroneY);
      }
      else if (cartwoN == cartwoNC || cartwoY == cartwoYC || cartwoB == cartwoBC)
      {
        cout << "What is the brand of the car you are adding?: \n";
        cin >> cartwoB;
        cout << "What is the model of the the car you are adding?: \n";
        cin >> cartwoN;
        cout << "What is the year model of the car you are adding: \n";
        cin >> cartwoY;
      }
      return 0;
    }
    else if (eChoicetwo == "Attempts")
    {
      cout << "What would you like to change the number of attempts to?: ";
      cin >> nAttempts;
      cout << "You have changed the number of attempts to " << nAttempts << " is this correct? Type Yes or No: ";
      cin >> rChoice;
      if (rChoice == "Yes" || "yes")
      {
        counter = nAttempts;
        rChoice = rChoiceR;
      }

      else if (rChoice == "No" || "no")
      {

        rChoice = rChoiceR;
      }
    }

    else if (eChoicetwo == "Dates")
    {
      rChoice = rChoiceR;
      cout << "These are the dates that cars have been returned at";
      cout << "Ford Raptor was borrowed at " << rMonth << "" << rDay << "" << rYear << " and returned " << rMonthRE << "" << rDayRE << "" << rYearRE << "\n";
      cout << "Jeep Cheorkee was borrowed at " << jMonth << "" << jDay << "" << jYear << " and returned " << jMonthRE << "" << jDayRE << "" << jYearRE << "\n";
      cout << "Dodge Charger was borrowed at " << cMonth << "" << cDay << "" << cYear << " and returned " << cMonthRE << "" << cDayRE << "" << cYearRE << "\n";
      cout << caroneFN << " was borrowed " << oMonth << "" << oDay << "" << oYear << " and returned " << oMonthRE << "" << oDayRE << "" << oYearRE << "\n";
      cout << cartwoFN << " was borrowed " << tMonth << "" << tDay << "" << tYear << " and returned " << tMonthRE << "" << tDayRE << "" << tYearRE << "\n";
      cout << "Are any of these past a month if so please fine them.";
      cout << "Would you like to countinue? Yes or no";
      getline(cin, rChoice);
      if (rChoice == "Yes")
      {
        rChoice = rChoiceR;
      }
      else if (rChoice == "No")
      {
        cout << "YOU THINK I CARE?";
        rChoice = rChoiceR;
      }
      else
      {
      }
    }
    else
    {
      cout << "That is not valid";
    }

    return 0;
  }
  else
  {

    return 0; // figure out how to make it go back to the beginning
  }
}

char codechecker()
{
  if (counter != nAttempts)
  {
    counter = 1 + counter;
    cout << "You have " << counter << " attempts left";
    cout << "What is the code?\n";
    cin >> codeChoice;
    if (codeChoice == code)
    {
      cout << "That is correct\n";
      cout << "Are you adding a car or changing the pin: ";
      cin >> eChoicetwo;
      if (eChoicetwo == "Code")
      {
        cout << "What would you like to change the code too?:";
        cin >> nCode;
        code = nCode;
      }
      else
      {
        cout << "That is not valid";
      }

      return 0;
    }
  }
  else if (counter == nAttempts)
  {
    cout << "You have run out of attempts";
  }
  return 0;
}
