/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:53:40 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/11 23:20:26 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_atoi.c" 
#include "ft_bzero.c" 
#include "ft_calloc.c" 
#include "ft_get_int_char_length.c"
#include "ft_isalnum.c" 
#include "ft_isalpha.c" 
#include "ft_isascii.c" 
#include "ft_isdigit.c" 
#include "ft_islower.c"
#include "ft_isprint.c" 
#include "ft_isupper.c" 
#include "ft_itoa.c"
#include "ft_memccpy.c" 
#include "ft_memchr.c" 
#include "ft_memcmp.c" 
#include "ft_memcpy.c" 
#include "ft_memmove.c"
#include "ft_memset.c" 
#include "ft_occure_in_set.c" 
#include "ft_putchar_fd.c" 
#include "ft_putendl_fd.c"
#include "ft_putnbr_fd.c" 
#include "ft_putstr_fd.c" 
#include "ft_split.c" 
#include "ft_str_count_opt.c" 
#include "ft_strchr.c"
#include "ft_strdup.c" 
#include "ft_strjoin.c" 
#include "ft_strlcat.c" 
#include "ft_strlcpy.c" 
#include "ft_strlen.c"
#include "ft_strlenopt.c" 
#include "ft_strmapi.c" 
#include "ft_strncmp.c" 
#include "ft_strnstr.c" 
#include "ft_strrchr.c"
#include "ft_strtrim.c" 
#include "ft_substr.c" 
#include "ft_tolower.c" 
#include "ft_toupper.c"



int main(int argc, char **argv)
{
    (void)argv;
    (void)argc;

    char buff1[200] = "hello my name is Alain";
    char buff2[200] = "hello my name is Alain";
    char con[200] = "doing some real testing";
    
    // strlcat(buff1, con, 50);
    ft_strlcat(buff2, con, 50);
    printf("%s\n", buff1);
    printf("%s\n", buff2);


    return (0);
}