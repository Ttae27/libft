/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:28:15 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/02 12:53:37 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	fill_word(char s, char c)
{
	if (s == c)
		return (0);
	return (1);
}

int	len_word(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != c)
		len++;
	return (len);
}

int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	tab = malloc(sizeof(char *) * count_word(s, c) + 1);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		j = 0;
		tab[k] = malloc(sizeof(char) * len_word(&s[i], c) + 1);
		if (!tab[k])
			return (NULL);
		while (fill_word(s[i], c))
			tab[k][j++] = s[i++];
		while (s[i] == c)
			i++;
		tab[k][j] = '\0';
		k++;
	}
	tab[k][0] = 0;
	return (tab);
}
