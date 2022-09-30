/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:11:17 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:26 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	const char	*src_cpy;
	char		*dst_cpy;

	src_cpy = (const char *)src;
	dst_cpy = (char *)dst;
	if (!dst && !src)
		return (NULL);
	while (len > 0)
	{
		*dst_cpy = *src_cpy;
		dst_cpy++;
		src_cpy++;
		len--;
	}
	return (dst);
}
/*
int main(void)
{
    char    str[11] = "hi";
    char    str2[] = "hola amigos";
    char    strB[11] = "hi";
    char    strB2[] = "hola amigos";

    printf("%s\n", str);

    printf("%s\n", ft_memcpy(str, str2, 6));
    printf("%s", memcpy(strB, strB2, 6));
    return (0);
}
*/
