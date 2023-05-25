/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:31:42 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/20 21:10:25 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: pointer to the last occurrence of c in the string or NULL if
	the character is not found
	param1: the string
	param2: character to be located
	description: Locates the last time param2 appears in the string param1.
	Terminated NULL is considered part of the string, if c = ‘\0’ then it 
	will be localized.

	Use: to locate a character in a string on the last occurrence.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
