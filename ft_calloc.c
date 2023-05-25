/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 21:16:15 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/24 21:18:45 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: pointer to the allocated memory or NULL if the allocation 
	fails
	param1: number of elements to be allocated
	param2: size of the elements
	description: allocates memory for a the number param1 of elements with
	the size param2. Unlike malloc which allocates memory without
	initializing its contents calloc initializes the allocated memory with
	zero values
	
	Use: to allocate memory, specially for arrays and structures, ensuring
	the allocated memory is set to zero
*/

#include "libft.h"

void	*ft_calloc(size_t numb, size_t size)
{	
	void	*ptr;

	ptr = malloc(numb * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, numb * size);
	return (ptr);
}
