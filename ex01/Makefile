NAME		= animal
SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS		= $(SRCS:.cpp=.o)
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
CPP			= c++
RM			= rm -f

all: $(NAME)

$(NAME) : $(OBJS)
		@echo  "\n\t\t🤹 Compiling $(NAME)... \n" 
		$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)
		@echo "\n\t\t😱 Compiled   $(NAME)\n"

clean	:
		@echo "\n\t\t🙀 Removing object files...\n"
		$(RM) $(OBJS)

fclean	: 	clean
			@echo "\n\t\t🙀 Removing $(NAME)...\n"
			$(RM) $(NAME)  
			rm -rf ~/LIbrary/Caches

re		:fclean all
.PHONY: all clean fclean re