#include<iostream>
#include"Leaver.h"

namespace Bay {
	Leaver::Leaver() {
		leave();
	}
	void Leaver::leave() {
		std::cout << "Введите имя: ";
		std::cin >> name_;
		std::cout << "До свидания, " << name_ << "!" << std::endl;
	}
}