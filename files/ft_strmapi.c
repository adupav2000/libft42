#include "../libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *s1;
    
    s1 = (char *)s;
    i = 0;
    while(s[i])
    {
        s1[i] = (char)malloc(1);
        s1[i] = (*f)(i, s1[i]);
        i++;
    }
    return (s1);
}
