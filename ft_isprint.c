/*#include <stdio.h>
#include <string.h>
#include <ctype.h>
*/
int ft_isprint(int c)
{
	if (c >= 32 && c <= 126) 
	    return (16384);
    return (0);
}

/*
int main()
{
    char a = 128;
   
    printf("%i   %i", isprint(a), ft_isprint(a));
    return (0);
}
*/
