/**
 * @Author: AlainduPavillon
 * @Date:   2019-10-21T17:18:40+02:00
 * @Email:  adupav2000@gmail.com
 * @Last modified by:   AlainduPavillon
 * @Last modified time: 2019-10-23T14:00:58+02:00
 * @License: THIS SOFTWARE IS THE INTELECTUAL PROPRETY OF ALAIN DU PAVILLON
 */
#include <string.h>
#include <stdlib.h>
char *ft_strdup(const char *s1)
{
   char *to_allocate;

   if(!(to_allocate = (char *)(malloc((strlen(s1)+1*sizeof(char *))))))
       return (0);
   return (to_allocate);
}
