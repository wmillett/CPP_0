#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"



class Contact {
	public:
	Contact();


	void displayContact(int id);
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};


#endif