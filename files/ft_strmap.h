#include <stdlib.h>

char * ft_strmap(char const *s, char (*f)(char))
{
    unsigned int i;
    char *s1;
    
    s1 = (char *)s;
    i = 0;
    while(s[i])
    {
        s1[i] = (char)malloc(1);
        s1[i] = (*f)(s1[i]);
        i++;
    }
    return (s1);
}
