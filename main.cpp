#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

class Animal() {
	Animal::animal(string name, int age, bool isHungry) {
		this->name = name;
		this->age = age;
		this->isHungry = isHungry;
	}
	Animal::~animal() {
		delete ~animal();

	}
	void Animal::feed() {
		if (isHungry == true) {

			cout << "the animal is hungry";

		}
		else () {
			cout << "the animal is not hungry";
		}
	}
	void Animal::display() {
		cout << "name :" << name << endl;
		cout << "feed" << isHungry << endl;
		cout << "age" << age << endl;


	}






}
class Reptile() {
	bool::isVenomous() {
		if (isVenomous == true) {
			cout << "is venomous"; 

		}

		else () {
			cout << "not venomous";
		}
	}

}
class Enclosure() {
	Enclosure::enclosure(int capacity, int currentCount, Enclosure * Animal) {

		this->capacity = capacity;
		this->currentCount = currentCount;
		this->Animal = nullptr;


	}
	void  Enclosure::addAnimal(Animal * a) {
		Enclosure a[] = new Enclosure;

	}
	void  Enclosure::displayAnimal() {
		cout << a;
	}
}
class Visitor() {

	Visitor::visitor(string visitorName, int ticketsBought) {
		this->visiotrName = visitorName;
		this->ticketsBought = ticketBought;
	}
	Visitor::displayInfo() {
		cout << visitorName << endl;
		cout << ticketBought << endl;

	}

}
 
int main() {
    
    int main() {

	enclosure(lion, 5, hungry);
	visitor(sarah, 3);
	Animal.displayInfo();
	Visitor.displayInfo();
}
    return 0;
}
