/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:39:50 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/16 18:42:45 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: < 0 if  param1 is less than param2. > 0 if param1 is greater
	than param2. If equal return 0
	param1: string for comparison
	param2: string for comparison
	param3: the number of characters to be compared
	description: compares param1 with param2 for param3 amount of
	characters.

	Use: compare the two strings.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	if (s1[i] != s2[i] && i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
