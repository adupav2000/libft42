/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:53:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/16 19:01:48 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
	char *ret_val;
	unsigned int i;
	unsigned int i2;

	ret_val = 0;
	if (NULL == (ret_val = malloc(ft_strlen(s1) + ft_strlen(s1) + 1)))
		return (NULL);
	i2 = -1;
	while(s1[++i2])
		ret_val[i2] = s1[i2];
	i = 0;
	while(s2[i])
		ret_val[i2++] = s2[i++];
	return(ret_val);
}
