/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 21:20:50 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/24 21:22:46 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: pointer to the duplicated string. NULL if insufficient memory
	is available
	param1: the string to duplicate
	description: allocates memory with malloc and duplicates string s to
	that memory

	Use: to duplicate a string into a different memory space memory
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	dest = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dest)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
