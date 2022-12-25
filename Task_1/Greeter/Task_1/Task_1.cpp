#include<Windows.h>
#include"Greeter.h"



int main(int argc, char** argv) {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Greeter::Greeter greeter;
	greeter.greet();

	return 0;
}