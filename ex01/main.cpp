#include "main.hpp"

int main() {
	std::string buff;
   std::cout << "Welcome to your Phonebook" << std::endl;
   while (1) {
	std::cout << "What would you like to do: " << std::endl;
	std::cin >> buff;
	if (!buff.empty())
	{
		if (buff == "EXIT")
		{
			std::cout << "Exiting Phonebook" << std::endl;
			break ;
		}
		if (buff == "ADD")
			std::cout << "Still testing" << std::endl;
		if (buff == "SEARCH")
			std::cout << "Still testing" << std::endl;

	}
	else
		break ;
   }
    return 0;
}