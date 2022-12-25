#pragma once
#include<string>

namespace Greeter {
	class Greeter {
	public:
		Greeter();
		void greet();
		std::string Get_Name();
	private:
		std::string name_;
	};
}
