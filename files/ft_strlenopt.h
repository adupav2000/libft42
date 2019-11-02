/*ft_strlenopt givves the possibility to measure the length */
/*of a string with customized string-ending declared as arg c*/

unsigned int ft_strlenopt(char *str, char c)
{
	unsigned int i;

	i = 0;
	while(str[i] != c && str[i])
		i++;
	return (i);
}