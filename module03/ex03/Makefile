NAME		= DiamondTrap
SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -Wshadow -Wno-shadow
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