#include "../libft.h"

char *ft_strdup(const char *s1)
{
   char *to_allocate;

   if(!(to_allocate = (char *)(malloc((strlen(s1)+1*sizeof(char *))))))
       return (0);
   return (to_allocate);
}
