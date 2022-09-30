/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:37:31 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:44 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	cpy = malloc(sizeof(char) * s1_len + 1);
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s1, s1_len + 1);
	return (cpy);
}
/*
int	main()
{
	char str[] = "paraguas";
	char str2[] = "paraguas";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str2));
}
*/
