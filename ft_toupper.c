/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:25:10 by jterra-e          #+#    #+#             */
/*   Updated: 2023/04/20 19:35:22 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: if c is lowercase it will return it in uppercase. 
	If not it will return c.
	param1: the character to convert
	description: convertes a character from lowercase to uppercase.

	Use: to change characters from lowercase to uppercase.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
