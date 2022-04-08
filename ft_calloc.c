/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 00:04:55 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/08 22:45:08 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*out;
	size_t	i;

	i = 0;
	if (count >= SIZE_MAX || size >= SIZE_MAX)
			return (NULL);
	out = malloc(count * size);
	if (out == NULL)
		return (NULL);
	while (i < count * size)
	{
		*(char *)(out + i) = 0;
		i++;
	}
	return (out);
}
