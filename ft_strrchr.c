/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:37:58 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:55 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	if ((unsigned char)c < 0)
		c *= -1;
	i = ft_strlen(str);
	while (i > -1)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "hola mundo";
// 	printf("%s", ft_strrchr(str, '\0'));
// 	printf("%s", ft_strrchr(str, 'l'));
// 	printf("\n");
// 	// printf("%s", strrchr(str, '\0'));
// 	// printf("%s", strrchr(str, 'l'));
// }
