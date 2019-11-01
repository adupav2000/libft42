#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
    int ret_val;
    int prog;

    prog = 0;
    ret_val = 0;
    while(s1[prog] == s2[prog] && s1[prog])
        prog++;
    ret_val = (int)(s1[prog] - s2[prog]); 
    return (ret_val);
}

