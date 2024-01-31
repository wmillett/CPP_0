#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(){

    Contact();
    for (int i = 0; i < 8; ++i) {
            contacts[i].setDetails("DefaultFirstName", "DefaultLastName", "DefaultNickname",
                                   "DefaultPhoneNumber", "DefaultDarkestSecret");
        }
}

void add_contact(int id)
{
    std::string tmp_first; 
    std::string tmp_last;
    std::string tmp_nickname;
    std::string phone;
    std::string dark;

    std::cout << CLEAR_TERM << "First name: ";
    std::cin >> tmp_first;
    std::cout << std::endl << "Last name: ";
    std::cin >> tmp_last;
    std::cout << std::endl << "Nickname: ";
    std::cin >> tmp_nickname;
    std::cout << std::endl << "Phone number: ";
    std::cin >> phone;
    std::cout << std::endl << "Darkest secret: ";
    std::cin >> dark;

    Contact::set_contact_details(id, tmp_first, tmp_last, tmp_nickname, phone, dark);
    // PhoneBook::contacts[id]

}

	void Contact::set_contact_details(int id, const std::string& first, const std::string& last,
                                    const std::string& nick, const std::string& phone, const std::string& secret) {
    if (id >= 0 && id < 8) {
        Contacts[id].setDetails(first, last, nick, phone, secret);
    } else {
        std::cout << "Invalid contact ID." << std::endl;
    }
}
