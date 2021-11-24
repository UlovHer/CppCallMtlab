#include <iostream>
#include "use_engine.h"
#include "use_dll.h"
int main()
{
	std::cout << "test demo" << std::endl;

	std::cout << "cpp call matlab engine status code" << std::endl;
	use_engine();
	std::cout << "cpp call matlab engine status code finished" << std::endl;

	std::cout << "cpp call matlab dll status code" << std::endl;
	int status_code = use_dll();
	std::cout << "cpp call matlab dll status code:" << status_code << std::endl;

	// system("pause");
	return 0;
}