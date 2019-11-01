#include <stdlib.h>

char *ft_strnew(size_t size)
{
    char *pointeur;
    
    pointeur = NULL;
    if(pointeur = (char *)malloc(size))
        memset(pointeur, '\0', size);
    else
        return (NULL);
    return (pointeur);
}
