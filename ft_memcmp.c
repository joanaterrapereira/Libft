/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:59:09 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/24 23:38:38 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	return: < 0 if dst less than src, > 0 if dest is greater than src, 0
	if they are equal
	param1: dst memory area
	param2: src memory area
	param3: the number of bytes to be compared
	description: compares param1 with param2 for param3 amount of bytes.

	Use: compare the two strings memory.

*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*ps1;
	unsigned const char	*ps2;

	i = 0;
	ps1 = (unsigned const char *) s1;
	ps2 = (unsigned const char *) s2;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return ((size_t)ps1[i] - (size_t)ps2[i]);
		i++;
	}
	return (0);
}
