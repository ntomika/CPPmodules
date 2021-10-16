NAME		= RealType
SRCS		= main.cpp Base.cpp
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
OBJS		= $(SRCS:.cpp=.o)
all:		$(NAME)

main.o: main.cpp A.hpp B.hpp C.hpp Base.hpp 
Base.o: Base.cpp Base.hpp

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -I. -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)


re:			fclean all

.PHONY:		all clean fclean re