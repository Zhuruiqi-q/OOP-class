// Elephant.cpp
#include "Elephant.h"
#include <iostream>

Elephant::Elephant(const std::string& elephantName, double elephantWeight)
	: name(elephantName), weight(elephantWeight) {
}

std::string Elephant::getName() const {
	return name;
}

double Elephant::getWeight() const {
	return weight;
}

void Elephant::roar() const {
	std::cout << name << "·¢³öÏìÁÁµÄ½ÐÉù£ºà»ÎØ¡«" << std::endl;
}