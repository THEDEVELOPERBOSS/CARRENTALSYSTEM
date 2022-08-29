#include<iostream>
#include<string> 
//using std namespace will make it so yoiu can say ::cout instead of std::cout
using namespace std;

int main() {
	//these are the variables
    string car1 = "Ford Raptor";
    string car2 = "Dodge Charger";
    string car3 = "Jeep Cherokee";
    string caroption = "default"; 
    string newcar = "default";
    string newcar2 = "default";
    string choice1 = "default";
    string admin = "admin";
    string user = "user";
    string pin = "default"; 
    string pin1 = "code";
    string pin2 = "Falcon";
    string choice2 = "default";
    string error1 = "default"; 
    string starover = "default";
	//this will ask if they are an admin or a user. If they are a admin it will allow them to add cars to the program in a user friendly way. 
    std::cout << "Are you an admin or user?\n";
    std::cin >> choice1; 
//this is if they are an admin
	if (choice1 == admin) {
			::cout << "Please enter your pin\n";
			std::cin >> pin;
		}//this is if they are a user
		else if (choice1 == user) {
			std::cout << "Type your car choice below we have a Ford Raptor, Dodge Charger, Jeep Cherokee," << newcar << newcar2 << 
		; "\n";
			}
			//this is if they do not enter one of the choices 
		else{
			std::cout << "You need to type one of the options displayed on screen.\n";
			
			}
	if ()
			//this will ask what the the admins what they are doing
	if if (pin == pin1) {
		std::cout << "Are you adding a car or renting a car for a customer.\n";
		std::cin >> choice2;
        }
   else if (pin == pin2) {
	   std::cout << "Are you adding a car or renting a car for a customer.\n";
	   ::cin >> choice2; 
	   }
}
