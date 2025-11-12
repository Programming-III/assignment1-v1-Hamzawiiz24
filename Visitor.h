#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor() {
private:
	string visitorName;
	int ticketsBought;
public:

	visitor();
	~visitor();
	visitor(string visitorName, int ticketsBought);
	void displayInfo();

}







#endif
