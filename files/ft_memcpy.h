
#include <string.h>



void *ft_memcpy(void *destination, const void *source, size_t n)
{
    void *retVal;

    retVal = destination;
    while(n-- > 0)
        *desination++ = *source;
    return(retVal);
}
