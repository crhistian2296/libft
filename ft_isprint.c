/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:25:18 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:16:57 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int chrtr)
{
	if (chrtr >= 32 && chrtr <= 126)
		return (1);
	else
		return (0);
}
/*
int main()
{
     printf("%d", ft_isprint(' '));
     printf("%d", ft_isprint('a'));
     printf("%d", ft_isprint('4'));
     printf("\n");
     printf("%d", isprint(' '));
     printf("%d", isprint('a'));
     printf("%d", isprint('4'));
}
*/
