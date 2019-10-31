#include <string.h>

void *ft_memcpy(void *destination, const void *source, size_t n)
{
    char *retVal;

    retVal = (char *)destination;
    while(n-- > 0)
    {
        retVal = (char *)source;
        retVal++;
    }
    return(retVal);
}
