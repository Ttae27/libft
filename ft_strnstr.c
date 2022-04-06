/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 01:07:50 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/06 22:55:32 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	if (!haystack)
		return (NULL);
	while (haystack[i] && i < len)
	{
		n = 0;
		while (haystack[i + n] == needle[n] && needle[n])
		{
			n++;
		}
		if (needle[n] == '\0' && i + n <= len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
