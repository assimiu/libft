
#include "libft.h"
#include <stdlib.h>

void f_join(char *dst, char const *s1, char const *s2)
{
	size_t i;

	i = 0;
	while ((dst[i] = *s1 ++))
		i ++;
	while ((dst[i] = *s2 ++))
		i ++;
}

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t size_s1;
	size_t size_s2;
	size_t size_total;
	char	*join;

	if (!s1 || !s2)
		return (0);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	join = (char *) malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (!join)
		return (0);
	f_join(join, s1, s2);
	return (join);
}
