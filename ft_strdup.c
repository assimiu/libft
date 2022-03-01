
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		n;

	n = 0;
	while (s1[n])
		n++;
	ptr = malloc(sizeof(char) * (n + 1));
	if (!ptr)
		return (0);
	n = 0;
	while (s1[n])
	{
		ptr[n] = s1[n];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
