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
    string identify = "default"
    

    std::cout << "Are you an admin or user?\n";
    std::cin >> choice1; 
    
    if ((choice1.compare(caroption) == 0) || (choice1.compare(newcar) == 0)) {
			
			choice1 = caroption;
			std::cout << "This shows that it works\n";
	}
    else {
		choice1 = newcar;
		}
    
    
}
