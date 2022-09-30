/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:06:38 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/30 23:51:44 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	if((!dest  || !src) && size == 0)
		return (0);
	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (dest_len >= size)
		return (src_len + size);
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// int	main(void)
// {
//     char a [14] = "hola";
//     char b [] = " hola amigo";
//     // char a2 [14] = "hola";
//     // char b2 [] = " hola amigo";
//     printf("%zu = ", ft_strlcat(a, b, 10));
//     // printf("%lu", strlcat(a2, b2, 8));
// 	printf("\n");
// 	printf("%s", a);
// 	// printf("%s", a2);
// }
