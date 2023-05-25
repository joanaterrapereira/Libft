/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:32:10 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/20 23:42:13 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: a pointer to the memory area
	param1: the string to add on
	param2: the source string
	param3: the number of bytes to copied
	description: The number of bytes defined by param3 will be copied from
	the string param2 to param1. The memory areas may overlap. Initially
	the bytes are copied into a temporary array and then transferred to the
	final string.

	Use: to copy one string from a specific memory area to another memory area
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!src && !dest)
		return (dest);
	if (src < dest)
	{
		while (n--)
			cdest[n] = csrc[n];
	}	
	else
	{
		while (n--)
			*cdest++ = *csrc++;
	}
	return (dest);
}
