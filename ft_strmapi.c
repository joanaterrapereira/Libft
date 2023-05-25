/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:37:02 by jterra-e          #+#    #+#             */
/*   Updated: 2023/05/10 21:39:42 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: the string created from succesive applications of the fuction
	or NULL if the allocation fails
	param1: the string to iterate on
	param2: the function to apply each character
	description: allocates memory with malloc and  applies the function 
	of param2 to each character of the string

	Use: to aplly a function on many characters of a string and 
	allocates memory
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	dest = (char *) malloc (sizeof(char) * ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	if (!s ||!f)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
