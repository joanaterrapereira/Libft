/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:41:38 by jterra-e          #+#    #+#             */
/*   Updated: 2023/05/10 21:41:58 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: none
	param1: pointer to a pointer to the first node of the list
	param2: inter to the new node to be added to the front of the list
	description: This function adds a new node to the front of the list.
	
	Use: o add a new node to the front of the list
*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
