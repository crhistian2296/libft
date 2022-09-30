/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:10:20 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:55:54 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	w_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static size_t	w_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static void	**iteri_free(char **matrix, int pos)
{
	while (pos > -1)
	{
		free(matrix[pos]);
		pos--;
	}
	free(matrix);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	w_units;
	size_t	w_counter;
	size_t	i;

	if (!s)
		return (NULL);
	w_units = w_count(s, c);
	matrix = ft_calloc(sizeof(char *), w_units + 1);
	if (!matrix)
		return (NULL);
	i = 0;
	w_counter = 0;
	while (w_counter < w_units)
	{
		while (s[i] == c)
			i++;
		matrix[w_counter] = ft_substr(s, i, w_len(&s[i], c));
		if (!matrix[w_counter])
			iteri_free(matrix, w_counter);
		i += w_len(&s[i], c);
		w_counter++;
	}
	return (matrix);
}
