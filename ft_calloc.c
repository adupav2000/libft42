/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:56:12 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/11 18:50:50 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ret_val;

    count = count <= 0 ? 1 : count;
    size = size <= 0 ? 1 : size;
    ret_val = 0;
    if (!(ret_val = malloc(size * count)))
        return (NULL);
    ft_bzero(ret_val, size);
    return (ret_val);
}