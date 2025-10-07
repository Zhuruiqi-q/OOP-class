// main.cpp
#include <iostream>
#include "Elephant.h"
#include "Refrigerator.h"

int main() {
	std::cout << "=== 大象装进冰箱程序演示 ===" << std::endl;

	// 创建大象对象
	Elephant elephant("大象", 4000.0);

	// 创建冰箱对象
	Refrigerator fridge("大", 5000.0);

	// 演示过程
	std::cout << "\n步骤1：创建一只" << elephant.getName()
		<< "，体重" << elephant.getWeight() << "kg" << std::endl;

	std::cout << "\n步骤2：准备一个" << fridge.getBrand()
		<< "冰箱，容量" << fridge.getCapacity() << "kg" << std::endl;

	std::cout << "\n步骤3：打开冰箱门" << std::endl;
	fridge.openDoor();

	std::cout << "\n步骤4：尝试将大象放入冰箱" << std::endl;
	elephant.roar();
	bool success = fridge.putElephant(elephant);

	if (success) {
		std::cout << "\n步骤5：关闭冰箱门" << std::endl;
		fridge.closeDoor();
		std::cout << "\n任务完成！大象成功装进冰箱！" << std::endl;
	}
	else {
		std::cout << "\n任务失败！需要更大的冰箱或更小的大象！" << std::endl;
	}

	return 0;
}