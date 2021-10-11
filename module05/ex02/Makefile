NAME		= Bureaucrat
SRCS		= main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
OBJS		= $(SRCS:.cpp=.o)
all:		$(NAME) $(DONE)

main.o: main.cpp Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
		RobotomyRequestForm.hpp PresidentialPardonForm.hpp
Bureaucrat.o: Bureaucrat.cpp Bureaucrat.hpp Form.hpp
Form.o: Form.cpp Form.hpp Bureaucrat.hpp
PresidentialPardonForm.o: PresidentialPardonForm.cpp \
		PresidentialPardonForm.hpp Form.hpp Bureaucrat.hpp
RobotomyRequestForm.o: RobotomyRequestForm.cpp RobotomyRequestForm.hpp \
		Form.hpp Bureaucrat.hpp
ShrubberyCreationForm.o: ShrubberyCreationForm.cpp \
		ShrubberyCreationForm.hpp Bureaucrat.hpp Form.hpp

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -I. -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)
			rm *_shrubbery

re:			fclean all

.PHONY:		all clean fclean re