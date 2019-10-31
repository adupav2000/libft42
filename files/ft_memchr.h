#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char to_find;
    unsigned char *to_search;
    int i;

    i = 0;
    to_find = (unsigned char)c;
    to_search = (unsigned char *)s;
    while(*(to_search + i)&& n - i)
    {
        if(*(to_search + i) == to_find)
            return ((to_search + i));
        i++;
    }
    return(0);
}


