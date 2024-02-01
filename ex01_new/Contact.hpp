#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"
# define FIRST 1
# define LAST 2
# define NICK 3


class Contact {
	public:
	Contact();
    ~Contact();



    void displayContact(int id);
    void setDetails(const std::string& first, const std::string& last, const std::string& nick,
                    const std::string& phone, const std::string& secret);
    std::string fetchData(int data);
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

#endif