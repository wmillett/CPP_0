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

void PhoneBook::formatString(std::string &input) {
    if (input.length() > 10) {
        input.erase(10);
        input[9] = '.'; 
    }
    else if (input.length() < 10) {
        int spacesToAdd = 10 - input.length();
        input = std::string(spacesToAdd, ' ') + input;
    }
}

std::string PhoneBook::getInfo(int id)
{
    std::string strNumber = std::to_string(id);
    std::string firstName = member[id].fetchData(FIRST);
    std::string lastName = member[id].fetchData(LAST);
    std::string nickname = member[id].fetchData(NICK);
    formatString(strNumber);
    formatString(firstName);
    formatString(lastName);
    formatString(nickname);
    
    return (strNumber + "|" + firstName + "|" + lastName + "|" + nickname);
}
