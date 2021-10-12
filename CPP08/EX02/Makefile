SRCS = main.cpp Mutantstack.cpp

OBJS = ${SRCS:.cpp=.o}

HEADERFILES = Mutantstack.hpp

HEADERF = .

HEADER = $(addprefix ${HEADERF}/, ${HEADERFILES}) 

NAME = Mutantstack

CC = clang++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors

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
