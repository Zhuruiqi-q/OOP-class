// Refrigerator.cpp
#include "Refrigerator.h"
#include <iostream>

Refrigerator::Refrigerator(const std::string& fridgeBrand, double fridgeCapacity)
	: brand(fridgeBrand), capacity(fridgeCapacity), isOpen(false) {
}

void Refrigerator::openDoor() {
	isOpen = true;
	std::cout << brand << "冰箱门已打开" << std::endl;
}

void Refrigerator::closeDoor() {
	isOpen = false;
	std::cout << brand << "冰箱门已关闭" << std::endl;
}

bool Refrigerator::putElephant(const Elephant& elephant) {
	if (!isOpen) {
		std::cout << "冰箱门关着，无法放入大象！" << std::endl;
		return false;
	}

	if (elephant.getWeight() > capacity) {
		std::cout << "大象太重了，放不进冰箱！" << std::endl;
		return false;
	}

	std::cout << "成功将" << elephant.getName() << "放入" << brand << "冰箱！" << std::endl;
	return true;
}

std::string Refrigerator::getBrand() const {
	return brand;
}

double Refrigerator::getCapacity() const {
	return capacity;
}

bool Refrigerator::getDoorStatus() const {
	return isOpen;
}