#include "main.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <sstream>

static void print_menu(std::string message)
{
	std::cout << SET_TERM << "Welcome to your Phonebook" << std::endl;
   	std::cout << std::endl;
	std::cout << message;
}

bool canConvertToInt(const std::string& str) {
    std::istringstream iss(str);
    int number;
    if (iss >> number) 
	{
        char remaining;
        if (iss >> remaining) 
            return false;
		else
            return true;
    } 
	else
        return false;
}

int main() {
	std::string buff;
	int id = 0;
	int nb_id = -1;
	int i = 0;
	Contact member[8];
	PhoneBook reference;

	print_menu("What would you like to do: ");
   while (TRUE) {
	std::cin >> buff;
	if (!buff.empty())
	{
		if (buff == "EXIT" || buff == "exit")
		{
			std::cout << SET_TERM << "Exiting Phonebook" << std::endl;
			break ;
		}
		else if (buff == "ADD" || buff == "add")
		{
			std::cout << SET_TERM << "Adding contact" << std::endl;
			reference.addContact(id);
			reference.displayMember(id);
			id++;
			if (nb_id == -1)
				nb_id = 1;
			else if (nb_id != 8)
				nb_id++;
			if (id == 8)
				id = 0;
			print_menu("What would you like to do: ");
		}
		else if (buff == "SEARCH" || buff == "search")
		{
			std::cout << SET_TERM << " Index | First Name | Last Name | Nickname " << std::endl;
			while (i < nb_id)
			{
				std::cout << reference.getInfo(i) << std::endl;
				i++;
			}
			i = 0;
			std::cout << std::endl << " Choose an index for more info: ";
			std::cin >> buff;
			if (!canConvertToInt(buff))
				print_menu("Invalid index input\nWhat would you like to do: ");
			else if (std::stoi(buff) < nb_id && std::stoi(buff) >= 0)
			{
				reference.displayMember(std::stoi(buff));
				std::cout << std::endl << "Send any input to go back to menu: ";
				std::cin >> buff;
				print_menu("What would you like to do: ");
			}
			else
				print_menu("Index value does not exist\nWhat would you like to do: ");
		}
		else
		{
			print_menu("Invalid phonebook command\nWhat would you like to do: ");
		}
	}
	else
		break ;
   }
    return 0;
}
