/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:59:54 by crgarcia          #+#    #+#             */
/*   Updated: 2022/10/01 03:49:17 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{	
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	fvalue;
	int		sign;

	i = 0;
	fvalue = 0;
	sign = 1;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		fvalue = (fvalue * 10) + (str[i] - '0');
		if (fvalue > LONG_MAX && sign == -1)
			return (0);
		if (fvalue > LONG_MAX && sign == 1)
			return (-1);
		i++;
	}
	return (fvalue * sign);
}

/*
int	main()
{
	printf("%d\n", 	ft_atoi("12"));
	printf("  12 => %d\n", ft_atoi("  12"));
	printf("  -12 => %d\n", ft_atoi("  -12"));
	printf("-  12 => %d\n", ft_atoi("-   12"));
	printf("  -12abc => %d\n", ft_atoi("  -12abc"));
	printf("  +12 => %d\n", ft_atoi("  +12"));

	printf("===ORIGINAL===\n");
	printf("%d\n", atoi("12"));
	printf("  12 => %d\n", atoi("  12"));
	printf("  -12 => %d\n", atoi("  -12"));
	printf("-  12 => %d\n", atoi("-   12"));
	printf("  -12abc => %d\n", atoi("  -12abc"));
	printf("  +12 => %d\n", atoi("  +12"));
}
*/
