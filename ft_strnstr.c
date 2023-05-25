/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:53:27 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/20 19:18:34 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: a pointer to the first character of the first ocorrence of 
	the small string. NULL if the substring is not found. If the substring
	is empty the main string is returned.
	param1: the string to be checked
	param2: the string to look for
	param3: the number of characters to be searched
	description: The number of characters defined by param3 will be
	scanned for the first ocorrence of param2 in the param1 string.
	Terminating NULL bytes are not compared

	Use: to locate a string in another string on it’s the first ocorrence.
*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < s)
	{
		if (str[i] == find[j])
		{
			while (str[i + j] == find[j] && str[i + j] != '\0' && s > (j + i))
			{
				if (find[j + 1] == '\0')
					return ((char *)str + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
