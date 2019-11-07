/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:53:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/04 12:11:42 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
	char *ret_val;
	unsigned int i;
	unsigned int i2;

	ret_val = (char *)s1;
	i2 = 0;
	while(ret_val[i2])
		i2++;
	i = 0;
	while(s2[i])
		ret_val[i2++] = s2[i++];
	ret_val = 0;
	return(ret_val);
}
