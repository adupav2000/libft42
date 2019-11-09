/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenopt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:53:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/04 12:15:16 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*ft_strlenopt givves the possibility to measure the length */
/*of a string with customized string-ending declared as arg c*/

#include "libft.h"

unsigned int ft_strlenopt(char *str, char c)
{
	unsigned int i;

	i = 0;
	while(str[i] != c && str[i])
		i++;
	return (i);
}