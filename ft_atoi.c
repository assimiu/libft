

int	ft_atoi(const char *str)
{
	int			sinal;
	long long	num;

	sinal = 1;
	num = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
    if (*str == '+')
		str++;
	if (*str == '-')
	{
		str++;
        sinal *= -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (sinal * (*(str++) - '0'));
		if (num > 2147483647)
			return (-1);
		if (num < -2147483648)
			return (0);
	}
	return (num);
}