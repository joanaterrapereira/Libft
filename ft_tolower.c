/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:35:55 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/20 19:36:15 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: if c is uppercase it will return it in lowercase. 
	If not it will return c.
	param1: the character to convert
	description: convertes a character from uppercase to lowercase.

	Use: to change characters from uppercase to lowercase.

*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
