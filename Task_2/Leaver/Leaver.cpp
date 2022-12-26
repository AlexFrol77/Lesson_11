#include"Leaver.h"
#include<iostream>

namespace Leaver {
	Leaver::Leaver() { Leave(); }

	std::string Leaver::Get_Name() {
		return name_;
	}

	void Leaver::Leave() {
		std::cout << "Введите имя: ";
		std::cin >> name_;
		std::cout << "До свидания, " << Get_Name() << "!" << std::endl;
	}
}