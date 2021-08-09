NAME		= phonebook
SRCS		= PhoneBook.cpp AddContact.cpp SearchContact.cpp
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -I. -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re