/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:59:54 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:10:54 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	valid_str(const char *str, size_t i, long long int fvalue, int sign)
{	
	if ((str[i] == '-' || str[i] == '+') && (str[i + 1] == '-'
			|| str[i + 1] == '+'))
		return (0);
	if (str[i] == '-' || str[i] == '+' || (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '+')
			i++;
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			fvalue = (10 * fvalue) + (str[i] - '0');
			i++;
		}
		fvalue *= sign;
		return (fvalue);
	}
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	long long int	fvalue;
	int				sign;

	i = 0;
	fvalue = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (valid_str(str, i, fvalue, sign));
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
