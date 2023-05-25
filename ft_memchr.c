/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:13:31 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/20 22:39:17 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: a pointer to the memory area where you have the character or
	NULL if the character is not found in this area
	param1: the point s —> memory area s
	param2: the character to search
	param3: the number of bytes to be searched
	description: The number of bytes defined by param3 will be scanned for
	the first occurrence of param2 in the param1 string.

	Use: to locate a character in the memory of a string on it’s the 
	first occurrence.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (void *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
