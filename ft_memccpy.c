/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:10:09 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/11 20:05:40 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i;
    unsigned char *destination;
    unsigned char *source;

    i = 0;
    destination = (unsigned char *)dst;
    source = (unsigned char *)src;
    while (n > i)
    {
        destination[i] = source[i];
        if (source[i] == (unsigned char)c)
            return ((void *)(src + ++i));
        i++;
    }
    return (NULL);
}
