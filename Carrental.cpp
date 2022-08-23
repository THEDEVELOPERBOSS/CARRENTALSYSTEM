#include<iostream>
#include<string> 
using namespace std;

int main() {

    string car1 = "Ford Raptor";
    string car2 = "Dodge Charger";
    string car3 = "Jeep Cherokee";
    string caroption = "default"; 
    string newcar = "default";
    string choice1 = "default";
    

    std::cout << "Choose what you would like to do\n";
    std::cin >> choice1; 
    
    if ((choice1.compare(caroption) == 0) || (choice1.compare(newcar) == 0)) {
			
			choice1 = caroption;
			std::cout << "This shows that it works";
	}
    else {
		choice1 = newcar;
		}
    
    
}
