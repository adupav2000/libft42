/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:12:19 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/11 19:01:08 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *s1;
    
    s1 = (char *)s;
    i = 0;
    while(s[i])
    {
        if (!(s1[i] = (char)malloc(sizeof((*f)(i, s1[i])) + 1)))
            return (NULL);
        s1[i] = (*f)(i, s1[i]);
        i++;
    }
    s1[i] = 0;
    return (s1);
}
