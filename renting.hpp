#include"iostream"
using namespace std;
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

  cout << Raptor << " is " << Rstatus << " Type: Raptor"
       << " \n";
  cout << Jeep << " is " << Jstatus << " Type: Cheorkee"
       << " \n";
  cout << Charger << " is " << Cstatus << " Type: Charger"
       << " \n";
  cout << "Type what car you would like to rent or type R to start over"
       << " \n";

  getline(cin, carWant);
  // if they want the Ford Raptor
  if (carWant == "Raptor" & Rstatus == aVail) // this is the section where they choose their car
  {
    cout << "Please enter today's date. MM/DD/YY\n";
    cin >> rMonth >> rDay >> rYear;
    cout << "What is your name? First then Last Name\n";
    cin >> rName >> rLame;
    cout << "Please return the car within one month\n";
    Rstatus = nVail; // changes the status so that other customers can't rent it. 
  }
  // if they want the Jeep Cheorkee
  else if (carWant == "Jeep" & Jstatus == aVail)
  {
    cout << "Please enter today's date. MM/DD/YY\n";
    cin >> jMonth;
    cout << "";
    cin >> jDay; 
    cout << "";
    cin >> jYear;
    cout << "What is your name? Please connect first and last name with _\n";
    cin >> jName;
    cout << "Please return it in a month max\n";
    Jstatus = nVail;
  }
  // if they want the Dodge Charger
  else if (carWant == "Charger" & Cstatus == aVail)
  {
    cout << "Please enter today's date. MM/DD/YY\n";
    cin >> cMonth;
    cout << "";
    cin >> cDay;
    cout << "";
    cin >> cYear;
    cout << "What is your name? Please connect first and last name with _\n";
    cin >> cName;
    cout << "Please return the car within one month\n";
    Cstatus = nVail;
  }
  // if they want the 1st varied car
  else if (carWant == caroneN & oStatus == aVail)
  {
    cout << "Please enter today's date. MM/DD/YY\n";
    cin >> oMonth;
    cout << "";
    cin >> oDay;
    cout << "";
    cin >> oYear;
    cout << "What is your name? Please connect first and last name with _\n";
    cin >> caroneRN;
    cout << "Please return the car within one month\n";
    oStatus = nVail;
  }
  // if they want the second varied car
  else if (carWant == cartwoN & tStatus == aVail)
  {
    cout << "Please enter today's date. MM/DD/YY\n";
    cin >> tMonth;
    cout << "";
    cin >> tDay;
    cout << "";
    cin >> tYear;
    cout << "What is your name? Please connect first and last name with _\n";
    cin >> cartwoRN;
    cout << "Please return the car within one month\n";
    tStatus = nVail;
  }
  // if they wish to start over
  else if (carWant == "R" || "r") 
  {
    restart();
  }
  // if what they type is not valid
  else
  {
    cout << "That is not valid\n";
    cout << "Please try again or call an Employee over to help you\n";
    return 0;
  }
  return 0;
}