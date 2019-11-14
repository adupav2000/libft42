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
    unsigned int i;
    unsigned int len;
    unsigned int ret;
    unsigned int n;

    len = ft_strlen(dst);
    n = dstsize - len;
    i = 0;
    ret = 0;
    while (--n && src[i])
    {
        dst[len + i] = src[i];
        i++;
    }
    while (ret < dstsize && ret < len)
        ret++;
    dst[len + i] = '\0';
    return (ret + len);
}
