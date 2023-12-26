#include<iostream>
using namespace std;
char submenurn()
{

  cout << "What is the car that you are returning? You can also type R to start over here\n";
  getline(cin, carReturn);
  if (carReturn == Raptor || "Raptor") // maybe make so you can put last name in too
  {
    cout << "What is your name? Please type First and Last name \n";
    cin >> Name >> lName;
  }
  else if (carReturn == Jeep)
  {
    cout << "What is your name? Please connect first and last name with a _  \n";
    getline(cin, Name);
  }
  else if (carReturn == Charger)
  {
    cout << "What is your name? Please connect first and last name with a _  \n";
    getline(cin, Name);
  }
  else if (carReturn == caroneFN)
  {
    cout << "What is your name? Please connect first and last name with a _  \n";
    getline(cin, Name);
  }
  else if (carReturn == cartwoFN)
  {
    cout << "What is your name? Please connect first and last name with a _  \n";
    getline(cin, Name);
  }
  else if ( carReturn == "R" || "r")
  {
    restart();   }

  // make sure for all of them it asks for their names
  if (Name == rName & Rstatus == nVail)
  {
    cout << "it has got to this point";
    cout << "What is todays date?: ";
    // cin >> rMonth >> rDay >> rYear;
    cin >> rMonth;
    cout << "";
    cin >> rDay;
    cout << "";
    cin >> rYear;
    cout << "The " << Raptor << " has been returned in our systems";
    Rstatus = aVail;
    rName = rName;
  }
  else if (Name == jName & Jstatus == nVail)
  {
    cout << "The " << Jeep << " has been returned in our systems";
    Jstatus = aVail;
    jName = rName;
  }
  else if (Name == cName & Cstatus == nVail)
  {
    cout << "The " << Charger << " has been returned in our systems";
    Cstatus = aVail;
    cName = "<BLANK>";
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