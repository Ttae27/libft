/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:12:39 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/04 23:47:10 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len = 1;
		n = n * -1;
	}
	while (n / 10 > 1)
	{
		len++;
		n /= 10;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	char	*out;
	int		i;

	i = 0;
	out = malloc(sizeof(char) * len(n) + 1);
	if (!out)
		return (NULL);
	if (n < 0)
	{
		out[i++] = '-';
		n = n * -1;
	}
	while (n >= 1)
	{
		out[i++] = (n % 10) + 48;
		n /= 10;
	}
	out[i] = '\0';
	return (out);
}
