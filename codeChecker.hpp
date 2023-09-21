#include<iostream>
// variables that aren't working in variables.hpp
// employees code variables
int nAttempts = 5; // this is a variable that will store the number of attempts allowed and it can be changed by the employee or manager
int counter = 0;   // this is a variable to count how many times they have entered the passcode incorreclty
using namespace std; 
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