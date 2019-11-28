/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:53:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/28 17:56:23 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *to_allocate;

	if (!(to_allocate = (char *)(malloc((strlen(s1) * sizeof(char))))))
		return (0);
	ft_memcpy(to_allocate, s1, ft_strlen(s1));
	to_allocate[strlen(s1)] = '\0';
	return (to_allocate);
}
