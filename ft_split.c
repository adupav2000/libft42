/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:09:47 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/19 15:53:53 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ** ft_split(char const *s, char c)
{
	char **ret_val;
	unsigned int i;
	unsigned int i_f_col;
	unsigned int i_s_col;

	i = 0;
	ret_val = 0;
	i_f_col = -1;
	i_s_col = 0;
	ret_val = (char **)malloc(sizeof(char *) * ((int)ft_str_count_opt((char *)s, c) + 1));
	while(s[i])
	{
		if (s[i] == c)
		{
			while(s[i] == c)
				i++;
			i_f_col++;
			ret_val[i_f_col] = 0;
			printf("%s\n", (char *)&s[i]);
			ret_val[i_f_col] = (char *)malloc((int)ft_strlenopt((char *)&s[i], c));
			i_s_col = 0;
		}
		ret_val[i_f_col][i_s_col++] = s[i++];
	}
	ret_val[++i_f_col] = NULL;
	return(ret_val);
}
