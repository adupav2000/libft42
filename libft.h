/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:16:06 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/04 12:16:09 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdlib.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
unsigned int ft_get_int_char_length(int  i);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_islower(int c);
int ft_isprint(int c);
int ft_isupper(int c);
char* ft_itoa(int n);
void *ft_memalloc(size_t size);


#endif