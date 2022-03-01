
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
int main()
{
	char a = 'A';
	printf("%c		%c\n", ft_tolower(a), tolower(a));
	return (0);
}
*/