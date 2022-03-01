
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t indx;
    size_t size;
    char *retorno;

    indx = 0;
    if (!s)
        return (0);
    size = ft_strlen(s);
    if (start >= size)
    {
        retorno = (char *) malloc(sizeof(char));
        *retorno = '\0';
        return (retorno);
    }
    if (size < len)
        retorno = (char *) malloc(sizeof(char) * (size - start));
    else 
        retorno = (char *) malloc(sizeof(char) * (len + 1));
    if (!retorno)
        return (0);
    while ((start < (unsigned int) size) && (indx < len))
    {
        retorno[indx] = s[start];
        indx ++;
        start ++;
    }
    retorno[indx] = 0;
    return (retorno);
}