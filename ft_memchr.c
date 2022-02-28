
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    char    *ptr_str;
    
    ptr_str = (char *) s;
    while (n-- > 0)
	{
		if (*ptr_str == c)
            return (ptr_str);
		ptr_str ++;
	}
    return (0);
}
