/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:35:53 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/24 12:53:40 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *list;
    t_list *iterator;
    
    if (lst == NULL || f == NULL)
        return (NULL);
    list = NULL;
    list = (*f)(lst);
    iterator = list;
    while (lst)
    {
        if (!(iterator = ft_lstnew(f(lst->next))))
            return (NULL);
        iterator = iterator->next;
        lst = lst->next;
    }
    
    iterator->next = NULL;
    return (list);
    del(iterator);
}