/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:58:54 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:16:56 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}
/*
int main()
{
     printf("%d", ft_isdigit(' '));
     printf("%d", ft_isdigit('a'));
     printf("%d", ft_isdigit('4'));
	 printf("\n");
     printf("%d", isdigit(' '));
     printf("%d", isdigit('a'));
     printf("%d", isdigit('4'));
}
*/
