#include "../libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    int i_haystack;
    int i_needle;
    
    i_haystack = 0;
    i_needle = 0;
    if(needle[i_needle] == '\0')
        return ((char *)haystack);
    while(haystack[i_haystack])
    {
        if(needle[i_needle] == '\0' && i_needle != 0)
            return ((char *)&haystack[i_haystack - i_needle]);
        if(haystack[i_haystack] == needle[i_needle])
           i_needle++;
        else if(haystack[i_haystack + 1] != '\0')
            i_needle = 0;
        i_haystack++;
    }
    if(haystack[i_haystack] == '\0' && needle[i_needle] == '\0')
        return ((char *)&haystack[i_haystack - i_needle]);
    return (NULL);
}
