#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

  
class Enclosure() {

private:
	int capacity; 
	int currentCount;
	Enclosure* Animal;

public:
	enclosure();
	enclosure(int capacity, int currentCount, Enclosure * Animal);
	void addAnimal(Animal * a);
	void displayAnimal();
	~enclosure();

}









#endif
