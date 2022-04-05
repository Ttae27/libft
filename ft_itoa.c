/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:12:39 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/06 00:11:44 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	do_plus(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*out;
	int		neg;
	int		i;

	i = 0;
	neg = (n < 0);
	out = ft_calloc(11 + neg, sizeof(char));
	if (!out)
		return (NULL);
	if (n == 0)
		out[0] = '0';
	if (n == -2147483648)
	{
		out[i++] = '8';
		n = -214748364;
	}
	while (n != 0)
	{
		out[i++] = (do_plus(n) % 10) + 48;
		n /= 10;
	}
	if (neg)
		out[i] = '-';
	ft_strrev(out);
	return (out);
}
