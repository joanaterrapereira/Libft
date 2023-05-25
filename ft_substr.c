/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:50:36 by jterra-e          #+#    #+#             */
/*   Updated: 2023/05/10 22:02:10 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: the substring or NULL if the allocation fails
	param1: the string
	param2: the start index of the substring
	param3: maximum length of the substring
	description: allocates memory with malloc for a the size param3. 
	The substring begins at index param2 and it’s of maximum size param3.

	Use: to take substrings out of strings
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*dest;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = start;
	j = 0;
	dest = (char *) malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (s[i] != '\0' && j < len)
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
