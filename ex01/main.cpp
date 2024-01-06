#include "main.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"
static void print_menu(std::string message)
{
	std::cout << CLEAR_TERM << "Welcome to your Phonebook" << std::endl;
   	std::cout << std::endl;
	std::cout << message;
}

int main() {
	std::string buff;
	int id = 0;
	Contact newContact;
	PhoneBook reference;

	print_menu("What would you like to do: ");
   while (TRUE) {
	std::cin >> buff;
	if (!buff.empty())
	{
		if (buff == "EXIT" || buff == "exit")
		{
			std::cout << "Exiting Phonebook" << std::endl;
			break ;
		}
		else if (buff == "ADD" || buff == "add")
		{
			std::cout << CLEAR_TERM << "Adding contact" << std::endl;
			reference.add_contact(id);
		}
		else if (buff == "SEARCH" || buff == "search")
			std::cout << "Still testing" << std::endl;
		else
		{
			print_menu("Invalid input, try again: ");
		}
	}
	else
		break ;
   }
    return 0;
}
