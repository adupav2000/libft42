#include <string.h>

char *ft_stpcpy(char * dst, const char * src)
{
    int i;

    i = 0;
    while(*(src + i))
    {
        *(dst + i) = *(src + i);
        i++;
    }
   *(dst + i) = '\0'; 
   return (dst); 
}

