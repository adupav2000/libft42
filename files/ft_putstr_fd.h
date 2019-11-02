void ft_putstr_fd(char const *s, int fd)
{
	unsigned int i;

	i = 0;
	while(s[i])
		ft_putstr_fd(s[i++], fd);
}
