/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:10:09 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/04 11:45:15 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

int ft_isascii(int c)
{
    if(c >= 0 && c <= 0177)
        return (1);
    return (0);
}
