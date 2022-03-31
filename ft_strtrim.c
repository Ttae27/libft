/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:34:50 by phongpai          #+#    #+#             */
/*   Updated: 2022/03/31 00:31:34 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_trim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				count++;
			j++;
		}
		i++;
	}
	return (ft_strlen(s1) - count);
}

int	check(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*out;

	i = 0;
	j = 0;
	out = malloc(sizeof(char) * len_trim(s1, set) + 1);
	while (s1[i])
	{
		if (check(s1[i], set))
			out[j++] = s1[i];
		i++;
	}
	out[j] = '\0';
	return (out);
}
