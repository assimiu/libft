
#include <stdio.h>

size_t	ft_strlcpy(char * dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	int				size_src;
	unsigned int				size;

	i = 0;
	size = (int) dstsize;
	size_src = 0;
	if (size != 0)
	{
		while (src[i] != 0 && size > (i + 1))
		{
			dst[i] = src[i];
			i ++;
		}
		dst[i] = 0;
	}
	while (src[size_src] != 0)
		size_src ++;
	return (size_src);
}