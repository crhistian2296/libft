/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:38:31 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:16:52 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int chrtr)
{
	if ((chrtr >= '0' && chrtr <= '9')
		|| (chrtr >= 'A' && chrtr <= 'Z')
		|| (chrtr >= 'a' && chrtr <= 'z'))
		return (1);
	else
		return (0);
}
/*
int main()
{
     printf("%d", ft_isalnum(' '));
     printf("%d", ft_isalnum('a'));
     printf("%d", ft_isalnum('4'));
	 printf("\n");
     printf("%d", isalnum(' '));
     printf("%d", isalnum('a'));
     printf("%d", isalnum('4'));
}
*/
