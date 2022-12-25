#include<iostream>
#include"Greeter.h"

Greeter::Greeter::Greeter() { }

std::string Greeter::Greeter::Get_Name() {
	return name_;
}
void Greeter::Greeter::greet() {
	std::cout << "Введите имя: ";
	std::cin >> name_;
	std::cout << "Здравствуйте, " << Get_Name() << "!" << std::endl;
}