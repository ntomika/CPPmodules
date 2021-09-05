NAME		= Bureaucrat
SRCS		= main.cpp Bureaucrat.cpp
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -MMD -g
OBJS		= $(SRCS:.cpp=.o)
all:		$(NAME) $(DONE)

-include $(OBJS:.o:.d)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -I. -o $(NAME)
			mv *.o objs/
			mv *.d files_d/

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)
			rm -rf objs/*
			rm -rf files_d/*


re:			fclean all

.PHONY:		all clean fclean re