// Refrigerator.cpp
#include "Refrigerator.h"
#include <iostream>

Refrigerator::Refrigerator(const std::string& fridgeBrand, double fridgeCapacity)
	: brand(fridgeBrand), capacity(fridgeCapacity), isOpen(false) {
}

void Refrigerator::openDoor() {
	isOpen = true;
	std::cout << brand << "�������Ѵ�" << std::endl;
}

void Refrigerator::closeDoor() {
	isOpen = false;
	std::cout << brand << "�������ѹر�" << std::endl;
}

bool Refrigerator::putElephant(const Elephant& elephant) {
	if (!isOpen) {
		std::cout << "�����Ź��ţ��޷��������" << std::endl;
		return false;
	}

	if (elephant.getWeight() > capacity) {
		std::cout << "����̫���ˣ��Ų������䣡" << std::endl;
		return false;
	}

	std::cout << "�ɹ���" << elephant.getName() << "����" << brand << "���䣡" << std::endl;
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