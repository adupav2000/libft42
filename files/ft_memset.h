/**
 * @Author: AlainduPavillon
 * @Date:   2019-10-23T00:58:38+02:00
 * @Email:  adupav2000@gmail.com
 * @Last modified by:   AlainduPavillon
 * @Last modified time: 2019-10-23T13:53:59+02:00
 * @License: THIS SOFTWARE IS THE INTELECTUAL PROPRETY OF ALAIN DU PAVILLON
 */

#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *to_assign;

    to_assign = (unsigned char *)b;
    while(len < 0)
    {
        *to_assign++ = (unsigned char)c;
        len--;
    }
    return(to_assign);
}
