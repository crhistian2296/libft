/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:50:29 by crgarcia          #+#    #+#             */
/*   Updated: 2022/10/01 03:50:43 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *long_str, const char *short_str, size_t len)
{
	size_t	pos;
	size_t	i;

	if ((!long_str || !short_str) && len == 0)
		return (NULL);
	if (!*short_str)
		return ((char *)long_str);
	pos = 0;
	while (long_str[pos] && pos < len)
	{
		if (long_str[pos] == short_str[0])
		{
			i = 1;
			while (short_str[i] && long_str[pos + i] == short_str[i]
				&& (pos + i) < len)
				++i;
			if (!short_str[i])
				return ((char *)&long_str[pos]);
		}
		++pos;
	}
	return (NULL);
}
