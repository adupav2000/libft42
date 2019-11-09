/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:47:30 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/08 16:21:31 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_putchar_fd.c"
#include "ft_putstr_fd.c"
#include "ft_putnbr_fd.c"
#include "ft_strlcpy.c"
#include "ft_substr.c"

int main()
{
    char *s1;
    char const *s2 = "<";

    s1 = (char *)malloc(6);
    *s1 = 0;
    
    ft_strlcpy(s1, s2, 3);
    ft_putstr_fd((ft_substr(s2, 2, 5)), 1);
    ft_putnbr_fd(-1234, 1);
}