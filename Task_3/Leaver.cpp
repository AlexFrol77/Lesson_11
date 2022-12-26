#include<iostream>
#include"Leaver.h"

	Leaver::Leaver::Leaver() { Leave(); }

	std::string Leaver::Leaver::Get_Name() {
		return name_;
	}

	void Leaver::Leaver::Leave() {
		std::cout << "Введите имя: ";
		std::cin >> name_;
		std::cout << "До свидания, " << Get_Name() << "!" << std::endl;
	}

