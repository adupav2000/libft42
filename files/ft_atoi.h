#include <string.h>

int ft_atoi(const char *str)
{
    long int safety_ret_val;
    int i;
    int pos;

    pos = 1;
    i = 0;
    safety_ret_val = 0;
    while(str[i] == ' ')
        i++;    
    while(str[i] == ('-' | '+'))
        if(str[i++] == '-')
            pos *= -1;
    while(str[i] <= '9' && str[i] >= '0')
    {
        if(safety_ret_val * 10 * pos + ((long int)str[i] - 48) > 2147483647)
            return safety_ret_val;
        if(safety_ret_val * 10 * pos + ((long int)str[i] - 48) < -2147483648)
            return safety_ret_val;
        safety_ret_val = safety_ret_val * 10 + ((long int)str[i++] - 48);
    }
    return  ((int)safety_ret_val * pos);
}

