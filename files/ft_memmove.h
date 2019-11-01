#include <string.h>


void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    char *s;

    d = (char *)dst;
    s = (char *)src;
    while(len-- > 0)
        *(d + len) = *(s + len); 
    return (dst);
}
