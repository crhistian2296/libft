/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:16:10 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:52 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*temp;

	if (!s || !f)
		return (NULL);
	temp = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	return (temp);
}
