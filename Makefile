# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 11:31:00 by adu-pavi          #+#    #+#              #
#    Updated: 2019/11/04 12:17:44 by adu-pavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

${FILES} = files/ft_atoi.h files/ft_bzero.h files/ft_ft_memdel.h\
			files/ft_get_int_char_length.h files/ft_isalnum.h\
			files/ft_isalpha.h files/ft_isascii.h files/ft_isdigit.h\
			files/ft_islower.h files/ft_isprint.h files/ft_isupper.h\
			files/ft_itoa.h files/ft_memalloc.h files/ft_memccpy.h\
			files/ft_memchr.h files/ft_memcmp.h files/ft_memcpy.h\
			files/ft_memdel.h files/ft_memmove.h files/ft_memset.h\
			files/ft_putchar.h files/ft_putchar_fd.h files/ft_putendl.h\
			files/ft_putendl_fd.h files/ft_putstr.h files/ft_putstr_fd.h\
			files/ft_strcat.h files/ft_strchr.h files/ft_strclr.h\
			files/ft_strcmp.h files/ft_strcpy.h files/ft_strdel.h\
			files/ft_strdup.h files/ft_strequ.h files/ft_striter.h\
			files/ft_striteri.h files/ft_strjoin.h files/ft_strlcat.h\
			files/ft_strlen.h files/ft_strlenopt.h files/ft_strmap.h\
			files/ft_strmapi.h files/ft_strncat.h files/ft_strncmp.h\
			files/ft_strncpy.h files/ft_strnequ.h files/ft_strnew.h\
			files/ft_strnlen.h files/ft_strnstr.h files/ft_strrchr.h\
			files/ft_strsplit.h files/ft_strstr.h files/ft_strsub.h\
			files/ft_strtrim.h files/ft_tolower.h files/ft_toupper.h

${OBJ} = $(FILES:.h=.o)

${LIB_NAME} = libft.a

${CMD} =  gcc -Wall -Wextra -Werror


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



