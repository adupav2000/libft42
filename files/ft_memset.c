/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:10:09 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/04 11:33:25 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *to_assign;

    to_assign = (unsigned char *)b;
    while(len < 0)
    {
        *to_assign++ = (unsigned char)c;
        len--;
    }
    return(to_assign);
}
