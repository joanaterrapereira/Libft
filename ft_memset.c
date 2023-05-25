/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 22:43:20 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/24 23:36:10 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: a pointer to the memory area
	param1: the string to work on
	param2: value to substitute
	param3: the number of bytes to substitute
	description: The number of bytes defined by param3 will be substituted
	by the value of param2 in the string given by param1

	Use: to alter a certain number of bytes of a string.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;	

	i = 0;
	ps = s;
	while (i < n)
	{
		ps[i] = c;
		i++;
	}
	return (s);
}
