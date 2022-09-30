/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:19:46 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:21 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int chr, size_t len)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char *)s;
	while (i < len)
	{
		if (arr[i] == (unsigned char)chr)
			return ((unsigned char *)&arr[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
    char    str[] = "hola amigos";
    char    str2[] = "hola amigos";

    printf("%s\n", str);

    printf("%s\n", ft_memchr(str, 'a', 6));
	printf("%s", memchr(str2, 'a', 6));
    return (0);
}
*/
