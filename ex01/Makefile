
# Colours
RED = '\033[0;31m'
GREEN = '\033[0;32m'
RESET_COLOR = '\033[0;0m'

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Executable
NAME = phonebook

# Source file
SRC = main.cpp \
	PhoneBook.cpp \
	Contact.cpp \

all: $(NAME)

$(NAME): $(SRC)
	@echo $(GREEN)"Compiling $(NAME)"$(RESET_COLOR)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	@echo $(RED)"No object files to remove."$(RESET_COLOR)

fclean:
	@echo $(RED)"$(NAME) has been deleted."$(RESET_COLOR)
	@rm -f $(NAME)

re: fclean all

.phony: all $(NAME) clean fclean re