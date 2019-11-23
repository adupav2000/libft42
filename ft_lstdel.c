/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:02:02 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/23 16:05:10 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdel(t_list **alst, void(*del)(void*, size_t))
{
    t_list *ptr;

    ptr = *alst;
    while (ptr)
    {
        (*del)(ptr->content, ptr->content_size);
        ptr = ptr->next;
    }
}