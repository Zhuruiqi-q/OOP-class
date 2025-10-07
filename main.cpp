// main.cpp
#include <iostream>
#include "Elephant.h"
#include "Refrigerator.h"

int main() {
	std::cout << "=== ����װ�����������ʾ ===" << std::endl;

	// �����������
	Elephant elephant("����", 4000.0);

	// �����������
	Refrigerator fridge("��", 5000.0);

	// ��ʾ����
	std::cout << "\n����1������һֻ" << elephant.getName()
		<< "������" << elephant.getWeight() << "kg" << std::endl;

	std::cout << "\n����2��׼��һ��" << fridge.getBrand()
		<< "���䣬����" << fridge.getCapacity() << "kg" << std::endl;

	std::cout << "\n����3���򿪱�����" << std::endl;
	fridge.openDoor();

	std::cout << "\n����4�����Խ�����������" << std::endl;
	elephant.roar();
	bool success = fridge.putElephant(elephant);

	if (success) {
		std::cout << "\n����5���رձ�����" << std::endl;
		fridge.closeDoor();
		std::cout << "\n������ɣ�����ɹ�װ�����䣡" << std::endl;
	}
	else {
		std::cout << "\n����ʧ�ܣ���Ҫ����ı�����С�Ĵ���" << std::endl;
	}

	return 0;
}