
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int     tam;
    char    *said;

    said = (char *) s;
    tam = ft_strlen(said);
    do{
        if (said[tam] == c)
        {
            return (&said[tam]);
        }
        tam --;
    }while (tam >= 0);
    
        
    
	return (0);
}
