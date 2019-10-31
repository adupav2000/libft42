/**
 * @Author: AlainduPavillon
 * @Date:   2019-10-23T14:26:34+02:00
 * @Email:  adupav2000@gmail.com
 * @Last modified by:   AlainduPavillon
 * @Last modified time: 2019-10-23T14:31:05+02:00
 * @License: THIS SOFTWARE IS THE INTELECTUAL PROPRETY OF ALAIN DU PAVILLON
 */
#include <string.h>

char *ft_strchr(const char *s, int c)
{
  while(*s++)
    if (*s == (char)c)
      return ((char *)s);
  return (0);
}
