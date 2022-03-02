
#include "libft.h"

static int contador(int nun)
{
	if (nun < 0)
	{
		nun = nun  * (-10);
	}
	if (nun >= 0 && nun <= 9)
		return (1);
	else
		return 1 + contador(nun/10);
}
char *ft_itoa(int n)
{
    size_t i;
	char	*itoa;

	i = contador(n);
	itoa = (char *) malloc((i + 1) * sizeof(char));
	if (!itoa)
		return (0);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = n * (-1);
		itoa[0] = '-';
	}
	itoa[i--] = 0;
	if (n == 0)
		itoa[0] = '0';
	else
		while (n != 0)
		{
			itoa[i --] = (n%10) + 48;
			n = n / 10;
		}
	return (itoa);
}