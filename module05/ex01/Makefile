NAME		= Bureaucrat
SRCS		= main.cpp Bureaucrat.cpp Form.cpp
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
OBJS		= $(SRCS:.cpp=.o)
all:		$(NAME) $(DONE)

main.o: main.cpp Bureaucrat.hpp Form.hpp
Bureaucrat.o: Bureaucrat.cpp Bureaucrat.hpp Form.hpp
Form.o: Form.cpp Form.hpp Bureaucrat.hpp

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -I. -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)


re:			fclean all

.PHONY:		all clean fclean re