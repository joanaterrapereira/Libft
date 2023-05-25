/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:46:40 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/24 23:37:28 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	return: length of the string to create (src)
	param1: the string to add on
	param2: the source string
	param3: the number of bytes to be copied
	description: The number of bytes defined by param3 -1 will be copied
	from the string param2 (null terminated) to param1. Param1 will be
	null terminated.

	Use: to copy one string to another string but having into
	account the size of the destination string.
 */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size -1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
