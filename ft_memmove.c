/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:10:09 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/11 22:22:13 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned    char    *d;
    unsigned    char    *s;
    unsigned    int     i;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    i = -1;
    if (dst == src || !len)
        return (dst);
    if (s < d)
        while (++i <= len)
            d[len - i] = s[len - i];
    else
        while (len-- > 0)
            *(d++) = *(s++); 
    return (dst);
}
