#include <string.h>
#include <errno.h>

char *ft_strdup(const char *s1)
{
   char *to_allocate;
   
   if(!(to_allocate = (unsigned char *)(malloc(sizeof((strlen(s1)+1)*char)))))
   {
       errno = 12;
       return (-1);
   }
   return (to_allocate);
}
