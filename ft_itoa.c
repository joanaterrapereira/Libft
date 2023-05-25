/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterra-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:36:48 by jterra-e          #+#    #+#             */
/*   Updated: 2023/05/10 23:20:29 by jterra-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: returns a string that represents the integer in digits
	param1: integer to convert
	description: allocates memory to create a string that represents the
	integer by adding 48(’0’) to it.

	Use: convert integers into chars	
*/

#include "libft.h"

int	ft_counter(long int n)
{
	long int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_shorteritoa(char *str, long int len, int n, int i)
{
	while (i < len)
	{
		str[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long int	len;
	int			i;
	char		*str;

	len = ft_counter(n);
	i = 0;
	str = (char *) malloc (sizeof(char) * len + 1);
	if (!str)
		return (0);
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
		i = 2;
	}
	else if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
		i = 1;
	}
	ft_shorteritoa(str, len, n, i);
	str[len] = '\0';
	return (str);
}
