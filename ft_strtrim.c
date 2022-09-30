/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:01:40 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:55 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final;
	size_t	i;
	size_t	s1_len;
	size_t	final_len;

	if (s1 == 0 || set == 0)
		return (NULL);
	i = 0;
	s1_len = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (s1[i] != '\0' && ft_strchr(set, s1[s1_len - 1]) && s1_len > i)
		s1_len--;
	final_len = s1_len - i + 1;
	final = ft_calloc(sizeof(char), final_len);
	if (!final)
		return (NULL);
	ft_strlcpy(final, &s1[i], final_len);
	return (final);
}
