#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *ret_val;
    
    ret_val = malloc(sizeof(t_list));
    ret_val->content = content;
    ret_val->next = NULL;
    return (ret_val);
}
