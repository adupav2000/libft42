#include "../libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *str1;
    unsigned int i;
    
    i = 0;
    str1 = NULL;
    if(!(str1[i] = (char)malloc(len)))
        return (0);
    while(start < len)
        str1[i++] = s[start++];
   return (str1);
}
