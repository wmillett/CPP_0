#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"
# include "Contact.hpp"
# include <string.h>

class PhoneBook {
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact(int id);
        void displayMember(int id);
        std::string getInfo(int id);
    private:
        void formatString(std::string &input);
    Contact member[8];
        void set_contact_details(int id, const std::string& first, const std::string& last,
            const std::string& nick, const std::string& phone, const std::string& secret);
};

#endif