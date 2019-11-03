#include "../libft.h"

char *ft_strtrim(char const * s)
{
    char *ret_val;
    unsigned int i;
    unsigned int i2;

    ret_val = NULL;
    if(!(ret_val = (char *)malloc(ft_strlen(s))))
        return (NULL);
    i = 0;
    i2 = 0;
    while(s[i])
    {
        if(!((i == 0 || s[i + 1] != 0)))
            if (!(s[i] != (' ' | ',' | '\n' | '\t')))
                ret_val[i2++] = s[i];
       i++;
    }
    return (ret_val);
}
