#include <stdlib.h>

char ** ft_strsplit(char const *s, char c)
{
	char **ret_val;
	unsigned int i;
	unsigned int i_ret_val_first_col;
	unsigned int i_ret_val_sec_col;

	i = 0;
	ret_val = 0;
	i_ret_val_first_col = 0;
	i_ret_val_sec_col = 0;
	while(s[i])
	{
		if (s[i] == c)
		{
			while(s[i] == c)
				i++;
			i_ret_val_first_col++;
			ret_val[i_ret_val_first_col] = 0;
			ret_val[i_ret_val_first_col] = malloc((int)ft_strlenopt(&s[i], c));
			i_ret_val_sec_col = 0;
		}
		ret_val[i_ret_val_first_col][i_ret_val_sec_col++] = s[i++];
	}
	return(ret_val);
}
