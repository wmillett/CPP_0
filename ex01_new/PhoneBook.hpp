#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"
# include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact(int id);
        void displayMember(int id);

    private:
    Contact member[8];
        void set_contact_details(int id, const std::string& first, const std::string& last,
            const std::string& nick, const std::string& phone, const std::string& secret);
};

#endif