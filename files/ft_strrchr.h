/**
 * @Author: AlainduPavillon
 * @Date:   2019-10-23T14:31:31+02:00
 * @Email:  adupav2000@gmail.com
 * @Last modified by:   AlainduPavillon
 * @Last modified time: 2019-10-31T14:55:32+01:00
 * @License: THIS SOFTWARE IS THE INTELECTUAL PROPRETY OF ALAIN DU PAVILLON
 */
#include <string.h>

char *strrchr(const char *s, int c)
{
  int end_s;

  end_s = ft_strlen(*s) + 1;
  while(end_s--)
    if (s[end_s] == (char)c)
      return ((char)s[end_s]);
  return (0);
}
