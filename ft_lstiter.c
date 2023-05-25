/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:13:33 by jterra-e          #+#    #+#             */
/*   Updated: 2023/05/10 21:14:03 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: none
	param1: pointer to the first node of the list
	param2: pointer to the function to be applied
	description: iterates over a list and applies the function given to
	each node until the end of the list

	Use: to iterate over each node of a list and apply a specific function
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!lst)
		return ;
	while (lst)
	{
		(f)(lst->content);
	lst = lst->next;
	}
}
