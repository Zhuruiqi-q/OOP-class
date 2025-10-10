// Refrigerator.h
#ifndef REFRIGERATOR_H
#define REFRIGERATOR_H

#include <string>
#include "Elephant.h"

class Refrigerator {
private:
	std::string brand;
	double capacity;
	bool isOpen;

public:
	Refrigerator(const std::string& fridgeBrand, double fridgeCapacity);
	void openDoor();
	void closeDoor();
	bool putElephant(const Elephant& elephant);
	std::string getBrand() const;
	double getCapacity() const;
	bool getDoorStatus() const;
};

#endif // REFRIGERATOR_H