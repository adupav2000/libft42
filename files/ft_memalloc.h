#include "../libft.h"

void *ft_memalloc(size_t size)
{
    void *to_alloc;

    if(!(to_alloc = (void *)malloc(size)))
        return (NULL);
    ft_memcpy(to_alloc, 0, size);
    return (to_alloc);
}
