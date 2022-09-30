/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:22:52 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:19 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = ft_calloc(sizeof(t_list), 1);
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int main()
{
	t_list *node; 
	int	i = 42;

	node = ft_lstnew(&i);
	int *k = node->content;
	//printf("%d",*(int *)(node->content));
	printf("%d", *k);
}
*/
