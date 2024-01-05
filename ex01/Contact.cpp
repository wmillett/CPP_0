#include "main.hpp"
#include "Contact.hpp"


Contact::Contact(){
	first_name = "No value attributed";
	last_name = "No value attributed";
	nickname = "No value attributed";
	phone_number = "No value attributed";
	darkest_secret = "No value attributed";
}

void Contact::displayContact(int id)
{
	(void)id;
	std::cout << CLEAR_TERM;
    std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " <<  nickname << std::endl;
	std::cout << "Phone Number: " <<  phone_number<< std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}
