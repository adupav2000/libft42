
<<<<<<< HEAD


void ft_memset(void *dest, int val, size_t len)
{
unsigned char *ptr;

	ptr = dest;
	while (len-- >0)
		*ptr++ = val;
	return dest;
=======
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
>>>>>>> 97713effd8db45793fb365769be436d85fbd096c
}
