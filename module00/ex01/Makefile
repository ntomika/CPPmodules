NAME		= phonebook
SRCS		= main.cpp ContactData.cpp PhoneBook.cpp
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