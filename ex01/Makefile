NAME = phonebook

CXX = c++

CCFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp Contact.cpp PhoneBook.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CCFLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re