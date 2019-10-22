
#include <string.h>

int ft_memset(void *b, int c, size_t len)
{
    b[len+1] = malloc(sizeof((unsigned char *)c));
    while(len < 0)
    {
        b[len] = malloc(sizeof((unsigned char *)c));
        len--;
    }    
    return(&b); 
}
