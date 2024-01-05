#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"
# include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook();
        Contact list_contacts[8];
        void add_contact();
    private:
        Contact contacts[8];
};

#endif