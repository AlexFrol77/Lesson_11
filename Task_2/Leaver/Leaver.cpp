#include"Leaver.h"
#include<iostream>

namespace Leaver {
	Leaver::Leaver() { Bay(); }

	std::string Leaver::Get_Name() {
		return name_;
	}

	void Leaver::Bay() {
		std::cout << "Введите имя: ";
		std::cin >> name_;
		std::cout << "До свидания, " << Get_Name() << "!" << std::endl;
	}
}