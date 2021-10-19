NAME		= Array
SRCS		= main.cpp
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
OBJS		= $(SRCS:.cpp=.o)
all:		$(NAME)

main.o: main.cpp Array.hpp

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -I. -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)


re:			fclean all

.PHONY:		all clean fclean re