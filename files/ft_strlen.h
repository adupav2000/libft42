/**
 * @Author: AlainduPavillon
 * @Date:   2019-10-21T16:49:55+02:00
 * @Email:  adupav2000@gmail.com
 * @Last modified by:   AlainduPavillon
 * @Last modified time: 2019-10-23T14:35:17+02:00
 * @License: THIS SOFTWARE IS THE INTELECTUAL PROPRETY OF ALAIN DU PAVILLON
 */
#include <string.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while(*(s + i))
      i++;
    return(i);
}
