#include<iostream>
#include"Carsubs.hpp"

uisng namespace std; 
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