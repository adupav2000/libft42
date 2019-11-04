/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:53:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/04 12:11:50 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t max_con;
    size_t len_dst;
    size_t ret_val;

    len_dst = ft_strlen(dst);
    max_con = (dstsize - ft_strlen(dst) - 1);
    if(max_con <= 0)
        return ft_strlen(dst);
    dst[len_dst + max_con] = '\0';
    ret_val = len_dst + max_con;  
    while(--max_con)
        dst[len_dst + max_con] = src[max_con];
   return (ret_val); 
}
