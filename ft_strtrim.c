/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:53:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/04 12:15:44 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const * s)
{
    char *ret_val;
    unsigned int i;
    unsigned int i2;

    ret_val = NULL;
    if(!(ret_val = (char *)malloc(ft_strlen(s))))
        return (NULL);
    i = 0;
    i2 = 0;
    while(s[i])
    {
        if(!((i == 0 || s[i + 1] != 0)))
            if (!(s[i] != (' ' | ',' | '\n' | '\t')))
                ret_val[i2++] = s[i];
       i++;
    }
    return (ret_val);
}
