#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>
#include <stdlib.h>


int main()
{
    char *string = "      split       this for   me  !       ";
    char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
    char **result = ft_split(string, ' ');

    printf("%s\n", result[5]);
    return 0;
}

