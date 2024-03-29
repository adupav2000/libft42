/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_int_char_length.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:10:09 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/04 11:45:01 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

unsigned int ft_get_int_char_length(int  i)
{
	long int s;
	int ret_val;
	int denum;
	unsigned int diviseur;
	unsigned int rep;

	denum = 10;
	ret_val = 0;
	diviseur = 1000000000;
	rep = 0;
	s = (long int)i;
	if (s < 0)
	{
		ret_val++;
		s *= -1;
	}
	while(!rep)
	{
		if (!(s = s/diviseur))
		{
			diviseur = diviseur / 10;
			denum--;
		}
		else
			ret_val += denum;
	}
	return (ret_val);
}