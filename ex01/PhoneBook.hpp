#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"


class Phonebook {
public:
    // Function to add a contact to the phonebook
    void addContact(const std::string& name, const std::string& phoneNumber) {
        contacts.push_back(Contact(name, phoneNumber));
    }

    // Function to display all contacts in the phonebook
    void displayContacts() const {
        std::cout << "Phonebook Contacts:" << std::endl;
        for (const auto& contact : contacts) {
            contact.display();
        }
        std::cout << std::endl;
    }

private:
    std::list<Contact> contacts;
};


#endif