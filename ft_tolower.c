/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:58:25 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:57 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int chrtr)
{
	if (chrtr >= 'A' && chrtr <= 'Z' )
		chrtr += 32;
	return (chrtr);
}
/*
int main()
{
     printf("%c", ft_tolower(' '));
     printf("%c", ft_tolower('a'));
     printf("%c", ft_tolower('4'));
     printf("A => %c", ft_tolower('A'));
     printf("\n");
     printf("%c", tolower(' '));
     printf("%c", tolower('a'));
     printf("%c", tolower('4'));
     printf("A => %c", tolower('A'));
}
*/
