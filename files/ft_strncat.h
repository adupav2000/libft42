#include "../libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
    int i;
    int i2;

    i = 0;
    i2 = 0;
    while(*(s1+i++))  
    while(*(s2 + i2) && (n - i2))
        *(s1 + i++) = *(s2 + i2++);
    return (s1);
}
