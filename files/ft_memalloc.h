#include <stdlib.h>
#include <string.h>

void *ft_memalloc(size_t size)
{
    void *to_alloc;

    to_alloc = (void *)malloc(size);
    ft_memcpy(to_alloc, 0, size);
    return (to_alloc);
}
