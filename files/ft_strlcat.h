/**
 * @Author: AlainduPavillon
 * @Date:   2019-10-22T19:51:35+02:00
 * @Email:  adupav2000@gmail.com
 * @Last modified by:   AlainduPavillon
 * @Last modified time: 2019-10-23T14:25:54+02:00
 * @License: THIS SOFTWARE IS THE INTELECTUAL PROPRETY OF ALAIN DU PAVILLON
 */
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t max_con;
    size_t len_dst;
    size_t ret_val;

    len_dst = ft_strlen(dst);
    max_con = (dstsize - ft_strlen(dst) - 1);
    if(max_con <= 0)
        return ft_strlen(dst);
    dst[len_dst + max_con] = '\0';
    ret_val = len_dst + max_con;  
    while(--max_con)
        dst[len_dst + max_con] = src[max_con];
   return (ret_val); 
}
