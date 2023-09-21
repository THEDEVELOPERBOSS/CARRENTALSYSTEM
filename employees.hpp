#include<iostream>
// This is the menu that will run if e is typed (employee)
char submenue()
{
  cout << "What is the code?\n"; 
  cin >> codeChoice;
  if (codeChoice == code) // if the code is correct
  {
    cout << "That is correct\n";
    cout << "Are you adding a car(Car) changing the pin(Pin) reviewing return dates(Dates) changing the code(Code) or changing the number of attempts allowed for the pin(Attempts): ";
    cin >> eChoicetwo;
    if (eChoicetwo == "Code") // if they would like to change the code 
    {
      cout << "What would you like to change the code too?:";
      cin >> nCode;
      code = nCode;
    }
    else if (eChoicetwo == "Car") // if they are adding a car
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
    else if (eChoicetwo == "Attempts") // if they are changing the number of attempts allowed to put in the code
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
    // maybe make it so it emails them and adds intrest instead of doing this
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
        cout << "YOU THINK I CARE? YOU ARE DOING IT ANYWAY";
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
    cout << "That is incorrect please try again"; // make this so that it gives them mulitple attempts to enter the password
    nAttempts = 1;
    // codeChoice == 0;
    cin >> codeChoice;
    return 0; // figure out how to make it go back to the beginning
  }
}
