/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:13:58 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/17 17:15:43 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ret_val;

	if (!s)
		return (0);
	if (ft_strlen(s) < start || !(ret_val = (char *)malloc(len + 1)))
		return (NULL);
	ft_strlcpy(ret_val, (s + start), len + 1);
	return (ret_val);
}
