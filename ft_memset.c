
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char *apt_str;
    unsigned int size;

    size = len;
    apt_str = (char *) b;
    while (size--)
        *apt_str++ = c;
    return (b);
}

