
#include "libft.h"

void *ft_memcpy(void *dst, void *src, size_t n)
{
    char    *cp_str1;
    char    *cp_str2;
    size_t     len;

    cp_str1 = dst;
    cp_str2 = src;
    len = 0;
    if (!cp_str1 && !cp_str2)
        return (0);
    while (len++ < n && (*cp_str1++ = *cp_str2 ++));  
    return (dst);
}

