/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:35:00 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/06 19:37:22 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *str1;
    unsigned int i;
    
    i = 0;
    str1 = NULL;
    if(!(str1[i] = (char)malloc(len)))
        return (0);
    while(start < len)
        str1[i++] = s[start++];
   return (str1);
}
