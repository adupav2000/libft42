/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:12:45 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/04 12:12:46 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int ret_val;
    int prog;

    prog = 0;
    ret_val = 0;
    while(s1[prog] == s2[prog] && s1[prog] && n--)
        prog++;
    ret_val = (int)(s1[prog] - s2[prog]); 
    return (ret_val);
    
}
