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
˙
char *ft_itoa(int n)
{
	unsigned	int	diviseur;
	int				moment_val;
	int				positivity;
	char			*ret_val;
	int				i_ret_val;
	int				valid_null;

	valid_null = 0;
	diviseur = 1000000000;
	positivity = 1;
	i_ret_val = 0;
	ret_val = 0;
	if (n < 0)
	{
		positivity = -1;
		i_ret_val++;
	}
	while(n > 0)
	{
		moment_val = n/diviseur;
		if (moment_val > 0 || valid_null == 1)
		{
			if (valid_null == 0)
			{
				if (!(ret_val = (char *)malloc(ft_get_int_char_length(n) + 1)))
				{
					return (0);
				}
			}
			valid_null = 1;
			*(ret_val + i_ret_val++) = (char)((moment_val * positivity));
		}
		n -= (moment_val * diviseur * positivity);
		moment_val = 0;
		diviseur = diviseur / 10;
	}
	return (ret_val);
}
