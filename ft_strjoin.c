/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:09:47 by amane             #+#    #+#             */
/*   Updated: 2022/03/02 16:12:43 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	f_join(char *dst, char const *s1, char const *s2)
{
	size_t	i;

	i = 0;
	while (*s1 != 0)
	{
		dst[i] = *s1;
		s1 ++;
		i ++;
	}
	while (*s2 != 0)
	{
		dst[i] = *s2;
		i ++;
		s2 ++;
	}
	dst[i] = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	size_t	size_total;
	char	*join;

	if (!s1 || !s2)
		return (0);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	join = (char *) malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (!join)
		return (0);
	f_join(join, s1, s2);
	return (join);
}
