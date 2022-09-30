/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgarcia <crgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:36:11 by crgarcia          #+#    #+#             */
/*   Updated: 2022/09/29 17:17:18 by crgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tail;
	t_list	*tmp_list;

	if (!lst || !f)
		return (NULL);
	tmp_list = NULL;
	while (lst)
	{
		tail = ft_lstnew(f(lst->content));
		if (!tail)
		{
			ft_lstclear(&tmp_list, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp_list, tail);
		lst = lst->next;
	}
	return (tmp_list);
}
