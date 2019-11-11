/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:03:33 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/11 15:33:52 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    long long int safety_ret_val;
    int         i;
    int         pos;

    pos = 1;
    i = 0;
    safety_ret_val = 0;
    while(str[i] == (' ' | '\n' | '\t'))
        i++;
    if(str[i] == '-' || str[i] == '+')
        if(str[i++] == '-')
            pos *= -1;
    while(str[i] <= '9' && str[i] >= '0')
    {
        if(safety_ret_val * 10 * pos + ((long int)str[i] - 48) > 2147483647)
            return safety_ret_val;
        if(safety_ret_val * 10 * pos + ((long int)str[i] - 48) < -2147483648)
            return safety_ret_val;
        safety_ret_val = safety_ret_val * 10 + ((long int)str[i++] - 48);
    }
    return  ((int)safety_ret_val * pos);
}
