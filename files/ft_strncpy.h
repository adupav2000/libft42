#include "../libft.h"

char *ft_strncpy(char * dst, const char * src, size_t len)
{
    int i;

    i = 0;
    while(*(src + i) && (len - i))
    {
        *(dst + i) = *(src + i);
        i++;
    }
    *(dst+i) = '\0';
    return (dst);    
}
