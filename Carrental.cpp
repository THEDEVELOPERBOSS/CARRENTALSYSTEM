#include<iostream>
#include<string> 
using namespace std;

int main() {
	//these are the variables
    string car1 = "Ford Raptor";
    string car2 = "Dodge Charger";
    string car3 = "Jeep Cherokee";
    string caroption = "default"; 
    string newcar = "default";
    string choice1 = "default";
    string admin = "admin";
    string user = "user";
    string pin1 = "Code"; 
	//this will ask if they are an admin or a user. If they are a admin it will allow them to add cars to the program in a user friendly way. 
    std::cout << "Are you an admin or user?\n";
    std::cin >> choice1; 

	if (choice1 == admin) {
			std::cout << "Please enter your pin\n";
			std::cin >> pin1;
		}
		else if (choice1 == user) {
			std::cout << "this shows that it works\n"; 
			}
			
		else{
			
			}
    
}
