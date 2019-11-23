 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:57:25 by AlainduPavi       #+#    #+#             */
/*   Updated: 2019/11/06 19:33:22 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	unsigned	int	diviseur;
	long	int 	stock;
	int				moment_val;
	int				positivity;
	char			*ret_val;
	int				i_ret_val;
	int				valid_null;

	valid_null = 0;
	stock = n;
	diviseur = 1000000000;
	positivity = 1;
	i_ret_val = 0;
	ret_val = 0;
	if (stock < 0)
	{
		positivity = -1;
		stock = -stock;
	}
	while(stock > 0 || diviseur > 0)
	{
		moment_val = (int)stock/diviseur;
		if (moment_val > 0 || valid_null == 1)
		{
			if (valid_null == 0)
			{
				if (!(ret_val = (char *)malloc(ft_get_int_char_length(stock) + 1)))
					return (0);
				if (positivity == -1)
					ret_val[i_ret_val++] = '-';
				valid_null = 1;
			}
			ret_val[i_ret_val++] = (char)((moment_val + 48));
			// printf("%c\n", (char)(moment_val + 48));
			stock -= (moment_val * diviseur);
			moment_val = 0;
			// printf("%c\n", ret_val[i_ret_val - 1]);
			
		}
		diviseur = diviseur / 10;
	}
	if (i_ret_val == 0)
	{
		if (!(ret_val = (char *)malloc(2 + 1)))
			return (0);
		ret_val[i_ret_val++] = '0';
	}
	ret_val[i_ret_val] = '\0';
	return (ret_val);
}
