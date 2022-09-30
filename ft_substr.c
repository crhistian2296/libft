/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 23:05:17 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:56 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*final_str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s) + start < len)
		len = ft_strlen(s + start);
	final_str = ft_calloc(sizeof(char), len + 1);
	if (!final_str)
		return (NULL);
	while (start < ft_strlen((char *)s) && s[start + i] != '\0' && len > i)
	{
		final_str[i] = s[start + i];
		i++;
	}
	return (final_str);
}

/*
int	main()
{
	char *str = "01234";
	size_t size = 10;
//	char *ret = ft_substr(str, 10, size);	
	printf("%s", ft_substr(str, 10, size));
}
*/
