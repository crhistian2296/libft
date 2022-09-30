/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:07:49 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:16:51 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (size == SIZE_MAX || count == SIZE_MAX)
		return (NULL);
	result = malloc(size * count);
	if (!result)
		return (NULL);
	ft_bzero(result, size * count);
	return (result);
}
