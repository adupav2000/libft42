FILES = $(wildcard *.c)

OBJ = $(FILES:.c=.o)

LIB_NAME = libft.a

CMD =  gcc -Wall -Wextra -Werror


all: ${LIB_NAME}

${LIB_NAME}:
		${CMD} -c ${FILES}
		ar rc ${LIB_NAME} ${OBJ}
		ranlib ${LIB_NAME}

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re



