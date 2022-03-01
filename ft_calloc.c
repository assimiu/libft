
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *alocacao;

    alocacao = (void *) malloc(size * count);
    if (!alocacao)
        return (0);
    ft_bzero(alocacao, (size * count));
    return (alocacao);
}
