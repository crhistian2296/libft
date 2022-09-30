/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:49:40 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:46 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	new_s = ft_calloc(sizeof(char), s1_len + s2_len + 1);
	if (!new_s)
		return (NULL);
	while (i < s1_len)
	{
		new_s[i] = s1[i];
		i++;
	}
	while (i < s1_len + s2_len)
	{
		new_s[i] = s2[i - s1_len];
		i++;
	}
	return (new_s);
}
