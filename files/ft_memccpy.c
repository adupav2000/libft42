/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:10:09 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/04 11:46:00 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    int i;
    int i2;
    char *ret_val;
    char *dest_1;

    dest_1 = (char *)dst;
    ret_val = NULL;
    i = 0;
    while(n-- > 0)
    {
        *(dest_1 + i) = (char)(src + i);
        i2 = i;
        while(i2 > 0)
            if(*(dest_1 + i2++) == ((char)(src + i) || (char)(c))) 
                return ((dest_1 + i));
        i++;
    }
    return (ret_val);
}
