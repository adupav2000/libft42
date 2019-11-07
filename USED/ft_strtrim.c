/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:53:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/07 16:53:58 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *ret_val;
    unsigned int i;
    unsigned int i2;

    ret_val = NULL;
    i = 0;
    i2 = 0; 
    while (ft_occures_in_set(s1[i], set) != -1 && s1[i])
        i++;
    if(!(ret_val = (char *)malloc(ft_strlen((s1 + i)))))
        return (NULL);
    while(s1[i])
        ret_val[i2++] = s1[i++];
    return (ret_val);
}
