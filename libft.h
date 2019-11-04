# ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int				ft_atoi(const char *str);
void 			ft_bzero(void *s, size_t n);
unsigned int	ft_get_int_char_length(int  i);
int 			ft_isalnum(int c);
int 			ft_isalpha(int c);
int 			ft_isascii(int c);
int 			ft_isdigit(int c);
int 			ft_islower(int c);
int				ft_isprint(int c);
int				ft_isupper(int c);
char			*ft_itoa(int n);
void			*ft_memalloc(size_t size);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void 			*ft_memcpy(void *destination, const void *source, size_t n);
void 			ft_memdel(void **ap);
void 			*ft_memmove(void *dst, const void *src, size_t len);
void 			*ft_memset(void *b, int c, size_t len);
char 			*ft_strcat(char *s1, const char *s2);
char 			*ft_strchr(const char *s, int c);
void 			ft_strclr(char*s);
char 			*ft_stpcpy(char * dst, const char * src);
void			ft_strdel(char **as);
char 			*ft_strdup(const char *s1);
int 			ft_strequ(char const *s1,char const *s2);
void 			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlen(const char *s);
unsigned int	ft_strlenopt(char *str, char c);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strncat(char *s1, const char *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char * dst, const char * src, size_t len);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
size_t			ft_strnlen(const char *s, size_t maxlen);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
char			*strrchr(const char *s, int c);
char			**ft_strsplit(char const *s, char c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const * s);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif
