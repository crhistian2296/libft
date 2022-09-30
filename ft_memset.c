/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:23:14 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:29 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int val, size_t len)
{
	char	*arr;
	size_t	i;

	i = 0;
	arr = b;
	while (i < len)
	{
		arr[i] = (unsigned char)val;
		i++;
	}
	return (b);
}

/*
int	main(void)
{
	char	str[] = "hola amigos";

	printf("%s\n", str);

	ft_memset(str, 'G', 6);
	printf("%s\n", str);
	return (0);
}
*/
