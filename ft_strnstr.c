/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:53:11 by amane             #+#    #+#             */
/*   Updated: 2022/03/02 17:08:18 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	char	c;
	char	*sc;
	size_t	len;

	len = ft_strlen(find);
	sc = (char *) s;
	while (*sc != 0)
	{
		if (ft_strncmp(sc, find, len) == 0)
			return (sc);
		sc ++;
	}
	return (0);
}
