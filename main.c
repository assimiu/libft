#include "libft.h"

int main()
{
    char *string = "      split       this for   me  !       ";
    char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
    char **result = ft_split(string, ' ');

    printf("%s\n", result[3]);
    return 0;
}

