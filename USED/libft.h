#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;




void 			*ft_memset(void *b, int c, size_t len);
void 			ft_bzero(void *s, size_t n);
void 			*ft_memcpy(void *destination, const void *source, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void 			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *s);
unsigned int	ft_strlenopt(char *str, char c);
int 			ft_isalpha(int c);
int 			ft_isdigit(int c);
int 			ft_isalnum(int c);
int 			ft_isascii(int c);
int				ft_isprint(int c);
int 			ft_islower(int c);
int				ft_isupper(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
char 			*ft_strchr(const char *s, int c);
char			*strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t			ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
int				ft_atoi(const char *str);








unsigned int	ft_get_int_char_length(int  i);


char			*ft_itoa(int n);
void			*ft_memalloc(size_t size);


void 			ft_memdel(void **ap);


char 			*ft_strcat(char *s1, const char *s2);

void 			ft_strclr(char*s);
char 			*ft_stpcpy(char * dst, const char * src);
void			ft_strdel(char **as);
char 			*ft_strdup(const char *s1);
int 			ft_strequ(char const *s1,char const *s2);
void 			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));

char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strncat(char *s1, const char *s2, size_t n);

char			*ft_strncpy(char * dst, const char * src, size_t len);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
size_t			ft_strnlen(const char *s, size_t maxlen);


char			**ft_strsplit(char const *s, char c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char 			*ft_strtrim(char const *s1, char const *set);
int				ft_tolower(int c);
int				ft_toupper(int c);
void 			ft_putchar_fd(char c, int fd);
void 			ft_putstr_fd(char const *s, int fd);
unsigned int 	ft_str_count_opt(char *str, char c);
int				ft_occures_in_set(char c, char const *set);
void			ft_lstdel(t_list **alst, void(*del)(void*, size_t));
void			ft_putnbr_fd(int n, int fd);

void			*calloc(size_t count, size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);

#endif
