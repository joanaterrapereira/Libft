/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:06:42 by jterra-e          #+#    #+#             */
/*   Updated: 2023/05/02 23:05:36 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: a pointer to the memory area
	param1: the string to add on
	param2: the source string
	param3: the number of bytes to copied
	description: The number of bytes defined by param3 will be copied from
	the string param2 to param1. The memory areas should not overlap, if
	that is the case ft_memmove can be used.

	Use: to copy one string from a memory area to another memory area
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc;

	cdest = (char *)dest;
	csrc = (const char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (n--)
		*cdest++ = *csrc++;
	return (dest);
}
