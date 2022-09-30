/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:59:18 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:22 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*s1_cpy;
	const char	*s2_cpy;
	size_t		i;

	s1_cpy = (const char *)s1;
	s2_cpy = (const char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_cpy[i] == s2_cpy[i])
		{
			i++;
		}
		else
			return ((unsigned char)s1_cpy[i] - (unsigned char)s2_cpy[i]);
	}
	return (0);
}
/*
int	main()
{
	char str[] = "hola familia";
	char str2[] = "hola family";
	char strB[] = "hola familia";
	char strB2[] = "hola family";

	printf("%d\n", ft_memcmp(str, str2, 12));
	printf("%d", memcmp(strB, strB2, 12));
}
*/
