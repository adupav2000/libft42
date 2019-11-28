/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:09:47 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/28 12:13:30 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_split_get_len_til_next(char const *str, char lock)
{
	size_t ret_val;

	ret_val = 0;
	while (str[ret_val] != lock && str[ret_val])
		ret_val++;
	return (ret_val);
}

char *ft_split_get_str(char const *str, char lock)
{
	size_t i;
	char *ret_val;

	i = 0;
	ret_val = NULL;
	while (str[i] != lock && str[i])
	{
		i++;
		ret_val[i] = str[i];
	}
	return ret_val;
}

size_t ft_split_count_words(char const *str, char lock)
{
	size_t i;
	size_t ret_val;

	ret_val = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != lock)
		{
			while (str[i] != lock && str[i])
				i++;
			ret_val++;
		}
		while (str[i] == lock)
			i++;
	}
	return ret_val;
}

char ** ft_split(char const *s, char c)
{
	char **ret_val;
	size_t i;
	size_t i2;

	i = 0;
	i2 = 0;
	ret_val = NULL;
	if (!(ret_val =  malloc(sizeof(char *) * ft_split_count_words(s, c))))
		return (0);
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		ret_val[i2] = ft_substr(&s[i], 0,
			ft_split_get_len_til_next(&s[i], c));
		
		i += ft_split_get_len_til_next(&s[i], c);
		while (s[i] == c)
			i++;
		i2++;
	}
	ret_val[i2] = NULL;
	return (ret_val);
}
