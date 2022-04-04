/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:29:21 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/04 11:32:34 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		out;

	sign = 1;
	i = 0;
	out = 0;
	if (!str[i] || str[i] == '\e')
		return (0);
	while (str[i] <= 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		out = out + (str[i] - 48);
		if (str[i + 1] >= 48 && str[i + 1] <= 57)
			out = out * 10;
		i++;
	}
	return (out * sign);
}
