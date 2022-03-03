/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:07:15 by amane             #+#    #+#             */
/*   Updated: 2022/03/02 17:07:35 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		tam;
	char		*said;

	said = (char *) s;
	tam = ft_strlen(said);
	while (tam >= 0 && ((char)*(s + tam)) != c)
		-- tam;
	if (((char)*(s + tam)) == c)
		return ((char *)(s + tam));
	return (0);
}
