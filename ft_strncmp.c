/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:28:23 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/04 10:30:35 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		cmp;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		cmp = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (cmp == 0)
			i++;
		else
			return (cmp);
	}
	return (0);
}
