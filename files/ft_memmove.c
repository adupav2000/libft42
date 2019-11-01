#include <string.h>


void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d = dst;
    const char *s = src;
    while(len-- > 0)
        *(dst + len) = *(src + len); 
    return (dst);
}
