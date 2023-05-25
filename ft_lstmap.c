/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:19:37 by jterra-e          #+#    #+#             */
/*   Updated: 2023/05/10 21:21:50 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: pointer to a new list
	param1: pointer to the first node of the original list
	param2: pointer to the function to be applied
	param3: pointer to the deleting function
	description: creates a new ist by appling the function given in param2
	to the list from param1

	Use: to create a new list, with the nodes of another list after passing 
	through a specific function
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*element;

	if (! lst)
		return (0);
	new = 0;
	while (lst)
	{
		element = ft_lstnew(f(lst->content));
		if (!element)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, element);
		lst = lst->next;
	}
	return (new);
}
