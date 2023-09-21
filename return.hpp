#include<iostream>
using namespace std;
char submenurn()
{

  cout << "What is the car that you are returning? You can also type R to start over here\n";
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
  else if ( carReturn == "R" || "r")
  {
    restart();
  }

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