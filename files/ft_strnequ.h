int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    unsigned int i;

    i = 0;
    while((s1[i] || s2[i] ) && n < i)
        if(s1[i] != s2[i++])
            return (0);
    return (1);

}
