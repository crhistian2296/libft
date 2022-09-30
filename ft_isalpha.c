/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:17:37 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:16:54 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main()
{
	 printf("%d", ft_isalpha(' '));
	 printf("%d", ft_isalpha('a'));
	 printf("%d", ft_isalpha('4'));
	 printf("\n");
	 printf("%d", isalpha(' '));
	 printf("%d", isalpha('a'));
	 printf("%d", isalpha('4'));
}
*/
