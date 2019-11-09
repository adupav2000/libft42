/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_occure_in_set.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:25:11 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/07 16:49:43 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*returns if an element occures in a string*/
/*, if it does it returns the point at wich it was found in the string*/
/* this will only reflect the first occurence of it*/
/*returns -1 if not found*/
int ft_occures_in_set(char c, char const *set)
{
	int i;

	i = 0;
	while(*(set + i) && *(set + i) != c)
		i++;
	if (!*(set + i))
		return (-1);
	else
		return (i);
}
