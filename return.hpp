#include<iostream>
using namespace std;
char submenurn()
{

  cout << "What is the car that you are returning? You can also type R to start over here\n";
  getline(cin, carReturn);
  // this next part works but only if the car has actually been taken out take that into account when testing
  // bring this over to the rest of the systems. 
  if ((Rstatus == nVail) && (carReturn == shorterR || carReturn == Raptor)) // add a checker to make sure the car is out(maybe its already exists)
  {
    cout << "What is your name? Please type First and Last name (in that order)\n";
    cin >> Name >> lName; // this is going to gather the names
    if (rName == Name && rLame == lName)// cross reference the last names here
    {
      cout << "Those are the correct names"; 
      Name = NameR;
      lName = NameR; 
    }
    else 
    {
      cout << Name << " "<< lName << "do not match with the names in database. Please try again.";
      Name = NameR; // these reset the name variables for the next use. 
      lName = NameR;
      restart(); // I don't think this is working yet
    }
    }
   else if ((Jstatus == nVail) && (carReturn == shorterJ || carReturn == Jeep))
  {
     cout << "What is your name? Please type First and Last name (in that order)\n";
    cin >> Name >> lName; // this is going to gather the names
    if (jName == Name && jLame == lName)// cross reference the last names here
    {
      cout << "Those are the correct names"; 
      Name = NameR;
      lName = NameR; 
    }
    else 
    {
      cout << Name << " "<< lName << "do not match with the names in database. Please try again.";
      Name = NameR;
      lName = NameR;
      restart();
    }
  }
  else if ((Cstatus == nVail) && (carReturn == shorterC || carReturn == Charger))
  {
    cout << "What is your name? Please type First and Last name (in that order)\n";
    cin >> Name >> lName; // this is going to gather the names
    if (cName == Name && cLame == lName)// cross reference the last names here
    {
      cout << "Those are the correct names"; 
      Name = NameR;
      lName = NameR; // resest both the names for the next use 
    }
    else 
    {
      cout << Name << " "<< lName << "do not match with the names in database. Please try again.";
      Name = NameR;
      lName = NameR;
      restart();
    }
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
    restart();   
    }
  else 
  {
    cout << "That does not match any of the cars we have in our database or the car is unavailable";
  }

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