#include<iostream>
#include"Greeter.h"

Greeter::Greeter::Greeter() { }

std::string Greeter::Greeter::Get_Name() {
	return name_;
}
void Greeter::Greeter::greet() {
	std::cout << "������� ���: ";
	std::cin >> name_;
	std::cout << "������������, " << Get_Name() << "!" << std::endl;
}