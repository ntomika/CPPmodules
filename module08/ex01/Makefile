NAME		= Span
SRCS		= main.cpp span.cpp
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
OBJS		= $(SRCS:.cpp=.o)
all:		$(NAME)

main.o: main.cpp span.hpp
span.o: span.cpp span.hpp

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -I. -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)


re:			fclean all

.PHONY:		all clean fclean re