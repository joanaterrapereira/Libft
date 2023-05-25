/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:11:18 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/20 19:15:22 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: total length of the resulting string
	param1: the string to add on
	param2: the source string
	param3: the number of bytes to be copied
	description: The number of bytes defined by param3 -1 will be copied 
	from the string param2 (null terminated) to param1. Param1 will be null
	terminated.

	Use: to concatenate one string with another string but having into
	account the size of the destination string.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = 0;
	j = 0;
	result = 0;
	while (dest[i])
		i++;
	while (src[result])
		result++;
	if (size <= i)
		result += size;
	else
		result += i;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (result);
}
