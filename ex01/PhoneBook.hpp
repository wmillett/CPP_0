#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"
# include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook();
        void add_contact(int id);
        void set_contact_details(int id, const std::string& first, const std::string& last,
            const std::string& nick, const std::string& phone, const std::string& secret);
        void display_contact(int id);
        
        Contact contacts[8];
    private:
};

#endif