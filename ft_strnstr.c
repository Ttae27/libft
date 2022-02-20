/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 01:07:50 by phongpai          #+#    #+#             */
/*   Updated: 2022/02/21 01:15:05 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	while (i < len)
	{
		n = 0;
		while (haystack[i + n] == needle[n] && needle[n] != '\0')
		{
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
