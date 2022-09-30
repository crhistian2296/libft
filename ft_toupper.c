/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:20:29 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:58 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int chrtr)
{
	if (chrtr >= 'a' && chrtr <= 'z' )
		chrtr -= 32;
	return (chrtr);
}
/*
int main()
{
     printf("%c", ft_toupper(' '));
     printf("a => %c", ft_toupper('a'));
     printf("%c", ft_toupper('4'));
     printf("%c", ft_toupper('A'));
     printf("\n");
     printf("%c", toupper(' '));
     printf("a => %c", toupper('a'));
     printf("%c", toupper('4'));
     printf("%c", toupper('A'));
}
*/
