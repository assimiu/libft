

int ft_atoi(char *a)
{
    int     valor;
    int     sinal;
    int     entr;

    valor = 0;
    sinal = 1;
    entr = 0;
    if (a == 0)
        return (0);
    while (*a)
    {
        if (entr == 1 && (*a > '9' || *a < '0'))
            return (valor * sinal);
        if ((*a == '+' || *a == '-') && sinal == -1)
            return (valor * sinal);
        if (*a == '-')
            sinal = -1;
        if ((*a > '9' || *a < '0') && *a != '-' && *a != '+')
                if (*a != '\t' && *a != '\n' && *a != ' ')
                    if (*a != '\f' && *a != '\r' && *a != '\v')
                        return (valor * sinal);
        if (*a >= '0' && *a <= '9')
        {
            valor = (valor * 10) + (*a - 48);
            entr = 1;
        }
        a ++;
    }
	return (valor * sinal);
}

