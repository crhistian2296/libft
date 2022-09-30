/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:11:04 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:16:55 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int chrtr)
{
	if (chrtr >= 0 && chrtr <= 127)
		return (1);
	else
		return (0);
}
/*
int main()
{
     printf("%d", ft_isascii(' '));
     printf("%d", ft_isascii('a'));
     printf("%d", ft_isascii('4'));
     printf("\n");
     printf("%d", isascii(' '));
     printf("%d", isascii('a'));
     printf("%d", isascii('4'));
}
*/
