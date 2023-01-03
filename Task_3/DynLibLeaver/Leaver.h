#pragma once
#include<string>

namespace Bay {
	class Leaver {
	public:
		Leaver();
		void leave();
	private:
		std::string name_;
	};
}