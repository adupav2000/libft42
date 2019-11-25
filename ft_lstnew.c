/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 12:47:20 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/25 16:15:04 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *ret_val;

    ret_val = NULL;
    if (!(ret_val = malloc(sizeof(content))))
        return (NULL);
    ret_val->content = NULL;
    ret_val->content_size = sizeof(content);
    if (!(ret_val->content = malloc(sizeof(content))))
        return (NULL);
    ret_val->next = NULL;
    return (ret_val);
}
