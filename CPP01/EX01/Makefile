SRCS = main.cpp Zombie.cpp ZombieHorde.cpp

OBJS = ${SRCS:.cpp=.o}

HEADERFILES = Zombie.hpp

HEADERF = .

HEADER = $(addprefix ${HEADERF}/, ${HEADERFILES}) 

NAME = zombiehorde

CC = clang++

RM = rm -f

FLAGS = -Wall -Wextra -Werror  

%.o:	%.cpp ${HEADER}
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o} -I${HEADERF}

$(NAME):	${OBJS}
			${CC} ${FLAGS} -lncurses -o ${NAME} ${OBJS} -I${HEADERF}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
