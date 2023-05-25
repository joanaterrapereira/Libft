/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:39:54 by jterra-e          #+#    #+#             */
/*   Updated: 2023/05/10 21:36:30 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: pointer to the first ocurrence of c in the string or NULL if
	the character is not found
	param1: the string
	param2: character to be located
	description: Locates the first time param2 appears in the string param1
	Terminated NULL is considered part of the string, if c = ‘\0’ then it
	will be localized.

	Use: to locate a character in a string on the first occurrence.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	conv;

	i = 0;
	conv = (char)c;
	while (s[i] != '\0' && s[i] != conv)
		i++;
	if (s[i] == conv)
		return ((char *)s + i);
	return (NULL);
}
