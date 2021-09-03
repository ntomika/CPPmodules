NAME		= AbstractClass

SRCS		= main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			Brain.cpp
			
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -MMD
OBJS		= $(SRCS:.cpp=.o)
all:		$(NAME)

-include $(OBJS:.o:.d)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -I. -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)
			rm -rf *.d


re:			fclean all

.PHONY:		all clean fclean re