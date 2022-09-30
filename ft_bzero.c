/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:57:25 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:16:49 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_bzero(void *b, size_t len)
{
	char	*arr;
	size_t	i;

	i = 0;
	arr = b;
	while (i < len)
	{
		arr[i] = '\0';
		i++;
	}
}
/*
int main(void)
{
    char    str[] = "hola amigos";

    ft_bzero(str, 6);
	write(1, str, 12);
	//printf("%s\n", &str[6]);
    return (0);
}
*/
