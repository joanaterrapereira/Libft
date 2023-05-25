/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:16:25 by jterra-e          #+#    #+#             */
/*   Updated: 2023/05/10 21:56:09 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	
	return: the array of new strings that results from the split or NULL
	if the allocation fails
	param1: the string to be splitted
	param2: the characters where it splits
	description: allocates memory with malloc and returns an array of strings
	obtained by spliting param1 when the character param2 is found. The array
	ends in a NULL

	Use: to split strings
*/

#include "libft.h"

char	ft_lenghtner(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static char	*ft_aux(const char *s, char c)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	dest = (char *) malloc (sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;

	dest = malloc (sizeof(char *) * (ft_lenghtner(s, c) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			dest[j] = ft_aux(&s[i], c);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	dest[j] = NULL;
	return (dest);
}
