#include "libft.h"

unsigned int ft_str_count_opt(char *str, char c)
{
	int i;
	int ret_val;

	i = 0;
	ret_val = 0;
	while(str[i])
		if (c == str[i++])
			ret_val++;
	return (ret_val);
}