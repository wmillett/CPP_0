#include "main.hpp" //rm
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(){

    Contact member[8];
    for (int i = 0; i < 8; ++i) {
            member[i].setDetails("DefaultFirstName", "DefaultLastName", "DefaultNickname",
                                   "DefaultPhoneNumber", "DefaultDarkestSecret");
        }
}
PhoneBook::~PhoneBook(){
}

void PhoneBook::addContact(int id)
{
    
    std::string tmp_first; 
    std::string tmp_last;
    std::string tmp_nickname;
    std::string phone;
    std::string dark;

    std::cout << SET_TERM << "First name: ";
    std::cin >> tmp_first;
    std::cout << SET_TERM << "Last name: ";
    std::cin >> tmp_last;
    std::cout << SET_TERM << "Nickname: ";
    std::cin >> tmp_nickname;
    std::cout << SET_TERM << "Phone number: ";
    std::cin >> phone;
    std::cout << SET_TERM << "Darkest secret: ";
    std::cin >> dark;

    member[id].setDetails(tmp_first, tmp_last, tmp_nickname, phone, dark);
  

}

void PhoneBook::displayMember(int id)
{
    member[id].displayContact(id);
  

}


// 	void Contact::set_contact_details(int id, const std::string& first, const std::string& last,
//                                     const std::string& nick, const std::string& phone, const std::string& secret) {
//         std::cout << "Invalid contact ID." << std::endl;
// }
