#include<iostream>
#include"Leaver.h"

	Leaver::Leaver::Leaver() { Leave(); }

	std::string Leaver::Leaver::Get_Name() {
		return name_;
	}

	void Leaver::Leaver::Leave() {
		std::cout << "������� ���: ";
		std::cin >> name_;
		std::cout << "�� ��������, " << Get_Name() << "!" << std::endl;
	}

