#include<iostream>
#include"Leaver.h"

namespace Bay {
	Leaver::Leaver() {
		leave();
	}
	void Leaver::leave() {
		std::cout << "������� ���: ";
		std::cin >> name_;
		std::cout << "�� ��������, " << name_ << "!" << std::endl;
	}
}