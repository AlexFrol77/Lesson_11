#include"Leaver.h"
#include<iostream>

namespace Leaver {
	Leaver::Leaver() { Bay(); }

	std::string Leaver::Get_Name() {
		return name_;
	}

	void Leaver::Bay() {
		std::cout << "������� ���: ";
		std::cin >> name_;
		std::cout << "�� ��������, " << Get_Name() << "!" << std::endl;
	}
}