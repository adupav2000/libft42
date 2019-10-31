#include <string.h>

void ft_bzero(void *s, size_t n)
{
    char *r;

    r = s;
    while(n-- > 0)
        *r++ = 0;
}
