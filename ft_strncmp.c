/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:53:47 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:53 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
/*
int main(void)
{
	char s1[] = "a";
	char s2[] = "c";
	printf("%d,\n", ft_strncmp(s1, s2, 3));
	printf("%d,\n", ft_strncmp("hoag", "hola", 3));
	printf("%d,\n", strncmp(s1, s2, 3));
	printf("%d,", strncmp("hoag", "hola", 3));
}
*/
