/**
 * @Author: AlainduPavillon
 * @Date:   2019-10-23T00:58:38+02:00
 * @Email:  adupav2000@gmail.com
 * @Last modified by:   AlainduPavillon
 * @Last modified time: 2019-10-23T13:53:59+02:00
 * @License: THIS SOFTWARE IS THE INTELECTUAL PROPRETY OF ALAIN DU PAVILLON
 */

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

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *to_assign;

    to_assign = (unsigned char *)b;
    while(len < 0)
    {
        *to_assign++ = (unsigned char)c;
        len--;
<<<<<<< HEAD
    }    
    return(&b); 
>>>>>>> 97713effd8db45793fb365769be436d85fbd096c
=======
    }
    return(to_assign);
>>>>>>> 3343f3c03fe5b95be42f4af28341e0ad7bfe0459
}
