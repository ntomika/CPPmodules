NAME		= Bureaucrat
SRCS		= main.cpp Bureaucrat.cpp
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -MMD
OBJS		= $(SRCS:.cpp=.o)
all:		$(NAME) $(DONE)

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