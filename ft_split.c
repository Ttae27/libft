/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:28:15 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/07 13:09:15 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char s, char c)
{
	if (s == c || s == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!check(str[i], c) && check(str[i + 1], c))
			count++;
		i++;
	}
	return (count);
}

void	*write_word(char *dst, char *src, char c)
{
	int	i;

	i = 0;
	while (!check(src[i], c))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	*write_split(char **split, char *str, char c, int k)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (check(str[i], c))
			i++;
		else
		{
			j = 0;
			while (!check(str[i + j], c))
				j++;
			split[k] = (char *)malloc(sizeof(char) * (j + 1));
			if (!split[k])
			{
				while (k > 0)
					free(split[--k]);
				return (NULL);
			}
			write_word(split[k++], &str[i], c);
			i += j;
		}
	}
	return ((void *)1);
}

char	**ft_split(const char *s, char c)
{
	char	**out;
	char	*str;
	int		k;

	if (!s)
		return (NULL);
	str = (char *)s;
	k = count_words(str, c);
	out = (char **)malloc(sizeof(char *) * (k + 1));
	if (!out)
		return (NULL);
	if (!(write_split(out, str, c, 0)))
	{
		free(out);
		return (NULL);
	}
	out[k] = NULL;
	return (out);
}
