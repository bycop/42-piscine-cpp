SRCS = main.cpp Bureaucrat.cpp Form.cpp

OBJS = ${SRCS:.cpp=.o}

HEADERFILES = Bureaucrat.hpp Form.hpp

HEADERF = .

HEADER = $(addprefix ${HEADERF}/, ${HEADERFILES}) 

NAME = bureaucrat

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
