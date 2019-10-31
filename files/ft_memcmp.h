#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;

    i = 0;
    while(n - i)
        if ((int)(s1 + i) != (int)(s2 + i))
            return ((int)((s1+i)- (s1+i)));
    return (0);
                    
}
