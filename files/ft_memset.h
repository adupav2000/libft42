#include "../libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *to_assign;

    to_assign = (unsigned char *)b;
    while(len < 0)
    {
        *to_assign++ = (unsigned char)c;
        len--;
    }
    return(to_assign);
}
