/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:36:09 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:28 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src_cpy;
	char		*dst_cpy;

	src_cpy = (const char *)src;
	dst_cpy = (char *)dst;
	if (dst == '\0' && src == '\0')
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len)
		{
			dst_cpy[len - 1] = src_cpy[len - 1];
			len--;
		}
	}
	return (dst);
}
/*
int main(void)
{
    char    str[11];
    char    str2[] = "hola amigos";
    char    strB[11];
    char    strB2[] = "hola amigos";

    printf("%s\n", str);

    printf("%s\n", ft_memmove(str,str2, 6));
    printf("%s", memmove(strB, strB2, 6));
    return (0);
}
*/
