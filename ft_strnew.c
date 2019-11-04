/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:13:08 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/04 12:13:15 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
    char *pointeur;
    
    pointeur = NULL;
    if(pointeur == (char *)malloc(size))
        memset(pointeur, '\0', size);
    else
        return (NULL);
    return (pointeur);
}
