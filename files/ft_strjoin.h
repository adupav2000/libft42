char * ft_strjoin(char const *s1, char const *s2)
{
	char *ret_val;
	unsigned int i;
	unsigned int i2;

	ret_val = (char *)s1;
	i2 = 0;
	while(ret_val[i2])
		i2++;
	i = 0;
	while(s2[i])
		ret_val[i2++] = s2[i++];
	ret_val = 0;
	return(ret_val);
}
