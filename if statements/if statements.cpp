
#include <iostream>

int main()
{
 
	std::cout << "1. Open file. " << std::endl;
	std::cout << "2. Copy file. " << std::endl;
	std::cout << "3. Delete file. " << std::endl;
	std::cout << "4. Send file. " << std::endl;
	std::cout << "5. Quit program. " << std::endl;

	std::cout << "Enter your selection > " << std::flush;

	int value;
	std::cin >> value;

	if (value < 3) {
		std::cout << "Insufficient privileges to use this menu option. " << std::endl;
	}
	else {
		std::cout << "Privilage level sufficient. " << std::endl;
	}

	if (value == 5) {
		std::cout << "Quitting .... " << std::endl;
	}
	else {
		std::cout << "Not quiting." << std::endl;
	}

}