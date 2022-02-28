

# ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
int ft_atoi(char *a);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *restrict dst, void  *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *src);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlcpy(char * dst, const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
//segunda perte
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
char **ft_split(char const *s, char c);
#endif