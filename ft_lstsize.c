/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:09:30 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/23 17:16:36 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int ret_val;

    ret_val = 0;
    while ((lst = lst->next))
        ret_val++;
    return (ret_val);
}
