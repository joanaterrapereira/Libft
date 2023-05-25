/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:03:00 by jterra-e          #+#    #+#             */
/*   Updated: 2023/05/10 21:59:25 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: the new trimmed string or NULL if the allocation fails
	param1: the string to be trimmed
	param2: the characters to trim
	description: allocates memory with malloc and created a new string 
	which is a copy of param1 without the characters specified in param2
	at the beginning or end of parram1.

	Use: to trim the beginning and end of a string
*/

#include "libft.h"

int	mod_strchr(char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trim;
	size_t		start;
	size_t		end;
	int			i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && mod_strchr(s1[start], set))
		start++;
	while (end > start && mod_strchr(s1[end - 1], set))
		end--;
	trim = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}
