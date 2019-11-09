/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:13:58 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/09 11:53:02 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ret_val;
    
    if (ft_strlen(s) < start || !(ret_val = (char *)malloc(len)))
        return (NULL);
    ft_strlcpy(ret_val, (s + start), len);
    return (ret_val);
}
