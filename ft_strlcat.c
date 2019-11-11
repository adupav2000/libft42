/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:53:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/11 23:22:00 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t len_dest;

    if (dstsize > ft_strlen(src))
        dstsize = ft_strlen(src) + 1;
    i = 0;
    len_dest = ft_strlen(dst);
    while(dstsize--)
    {
        dst[len_dest + i] = src[i];
        i++;
    }
    return (len_dest);
}
