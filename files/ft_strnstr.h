#include <string.h>
/*DONT KNOW IF THE SEACH STOPS WHEN I_HAYSTACK OR THE I_NEEDLE IS LONGER THAN*/
/*THE LEN VALUE PUTTING IT TO HAYSTACK FOR THE MOMENT*/
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i_haystack;
    int i_needle;
    
    i_haystack = 0;
    i_needle = 0;
    if(needle[i_needle] == '\0')
        return ((char *)haystack);
    while(haystack[i_haystack] && len--)
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
