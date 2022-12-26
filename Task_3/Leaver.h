#pragma once
#include<string>

#ifdef LEAVER_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif

namespace Leaver {
	class Leaver {
	public:
		LEAVER_API Leaver();

		LEAVER_API std::string Get_Name();
		void Leave();

	private:
		std::string name_;
	};
}
