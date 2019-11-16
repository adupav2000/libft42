/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:53:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/16 18:05:53 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t len;
    size_t i;
    size_t ret_val;

    i = 0;
    len = (ft_strlen(src) > dstsize) ? dstsize - 1 : ft_strlen(src) - 1;
    ret_val = ft_strlen(dst) + len;
    if (dstsize == 0 || dstsize > ft_strlen(dst))
        return (ft_strlen(dst));
    dst[ft_strlen(dst) + len] = '\0';
    while (i < len)
    {
        dst[ret_val - len + i] = src[i];
        i++;
    }
    dst[ret_val] = '\0';
    return (ret_val);
}
