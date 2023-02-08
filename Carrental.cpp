#include<iostream>
#include<string> 
#include"Car.h"
//using std namespace will make it so yoiu can say cout instead of std::cout
using namespace std;


class Car { 

	Car(int car = 0) {}
	~Car () {} 
	void Speed(int speed = 0) {}
	void Brake(int brake = 0) {}
};

int main() {
	
	 string Raptor = "Ford Raptor";
	 string Jeep = "Jeep Cheorkee";
	 string charger = "Dodge Charger";
	 int code = 2681;
	 char choiceone = 'd';

	 cout << "Are you are customer or employee?\n Type 'c' for customer and 'e' for employee\n";
	 cin >> choiceone;

	switch(choiceone) {

		case 'c':
		cout << "ok";
		break;
		case 'e':
		cout << "MAKE ME MONEYS";
		break;
		default:
		cout << "Never gonna give you up";
	}

	 }

	 
	 
	 
	 
	 
	 
	 
	 
	 
	 