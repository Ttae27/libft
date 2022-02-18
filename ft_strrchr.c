/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:23:32 by phongpai          #+#    #+#             */
/*   Updated: 2022/02/18 22:23:58 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*out;
	size_t	i;

	i = 0;
	len = ft_strlen(s) - 1;
	while (s[len] != c && len > 0)
		len--;
	out = malloc(sizeof(char) * (ft_strlen(s) - len) + 1);
	if (s[len] == c)
	{
		while (s[len])
		{
			out[i] = s[len];
			i++;
			len++;
		}
	}
	out[i] = '\0';
	return (out);
}
