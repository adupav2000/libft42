/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:05:42 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/09 11:52:26 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t dst_len;
    unsigned int i;

    if (dstsize <= 0)
        return (ft_strlen(src));
    i = 0;
    dst_len =
        (ft_strlen(src) + 1) > dstsize - 1 ? dstsize - 1 : (ft_strlen(src) + 1);
    *(dst + dst_len) = 0;
    while (src[i] && i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    return (dst_len);
}
