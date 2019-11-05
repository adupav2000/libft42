#include "libft.h"

int ft_isprint(int c)
{
	if(c <= 176 && c >= 40)
		return (1);
	return (0); 
} 
