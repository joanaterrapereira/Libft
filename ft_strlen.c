/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:50:57 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/16 16:36:56 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: the number os characters in the string pointed by s
	param: a string to be counted
	description: calculates de lenght of a string by iteration. 
	Excludes the terminating null character.

	Use: to calculate the number of elements inside of a string. 
	Terminating null character is not considered.
 */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
