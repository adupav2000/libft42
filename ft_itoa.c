#include "libft.h"

char* ft_itoa(int n)
{
	unsigned int diviseur;
	int moment_val;
	int positivity;
	char *ret_val;
	int i_ret_val;
	int valid_null;

	valid_null = 0;
	diviseur = 1000000000;
	positivity = 1;
	i_ret_val = 0;
	ret_val = 0;
	if (n < 0)
	{
		positivity = -1;
		i_ret_val++;
	}
	while(n > 0)
	{
		printf("1.moment_val --> %d\n", moment_val);
		printf("1.n --> %d\n", n);
		printf("1.diviseur --> %d\n", diviseur);
		printf("1.n/diviseur --> %d\n", n/diviseur);
		moment_val = n/diviseur;
		if (moment_val > 0 || valid_null == 1)
		{
			ft_putstr(ret_val);
			printf("i_ret_val   {%d}\n", i_ret_val);
			printf("moment_val{%d}\n", moment_val);
			if (valid_null == 0)
			{
				if (!(ret_val = (char *)malloc(ft_get_int_char_length(n))))
				{
					return (0);
				}
			}
			valid_null = 1;
			
			*(ret_val + i_ret_val++) = (char)((moment_val * positivity));
		}
		printf("2.moment_val --> %d\n", moment_val);
		printf("2.n --> %d\n", n);
		printf("2.diviseur --> %d\n", diviseur);
		n -= (moment_val * diviseur * positivity);
		moment_val = 0;
		diviseur = diviseur / 10;
	}
	return (ret_val);
}
