/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:20:58 by crgarcia          #+#    #+#             */
/*   Updated: 2022/10/01 03:22:08 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(long int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len++);
}

char	*ft_itoa(int n)
{
	size_t		n_len;
	char		*result;
	long int	nbr;

	nbr = n;
	n_len = get_len(nbr);
	result = ft_calloc(sizeof(char), n_len + 1);
	if (!result)
		return (NULL);
	if (nbr == 0)
		result[0] = '0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		result[n_len-- -1] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (result);
}
/*
int	main()
{
	printf("%s", ft_itoa(-0));
}
*/
