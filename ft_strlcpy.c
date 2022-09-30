/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:35:49 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:49 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char src1[] = "ambiguo";
	char dest1[] = "pocoyo";
	char src2[] = "ambiguo";
	char dest2[] = "pocoyo";
	printf("%zu", ft_strlcpy(dest1, src1, 2));
	printf("%s", dest1);
	printf("\n");
	printf("%lu", strlcpy(dest2, src2, 2));
	printf("%s", dest2);
}
*/
