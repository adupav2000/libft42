#include <string.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    int i;
    int i2;
    void *ret_val;
    void *dest_1;
    
    dest_1 = dst;
    ret_val = NULL;
    i = 0;
    while(n-- > 0)
    {
        *(dest_1 + i) = *(src + i);
        i2 = i;
        while(i2 > 0)
            if(*(dest_1 + i2++) == *(src + i))
                return ((dest_1 + i));
        i++;
    }
    return (ret_val);

}
