#include "../libft.h"

char *strrchr(const char *s, int c)
{
  int end_s;

  end_s = ft_strlen(s) + 1;
  while(end_s--)
    if (s[end_s] == (char)c)
      return ((char *)&s[end_s]);
  return (0);
}
