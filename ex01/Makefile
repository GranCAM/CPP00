NAME = phonebook

CC = c++

CCFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp Contact.cpp PhoneBook.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CCFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re