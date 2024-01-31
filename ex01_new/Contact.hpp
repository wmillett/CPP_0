#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"



class Contact {
	public:
	Contact();
    ~Contact();



    void displayContact(int id);
    void setDetails(const std::string& first, const std::string& last, const std::string& nick,
                    const std::string& phone, const std::string& secret);
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

#endif