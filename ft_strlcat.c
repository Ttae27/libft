/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:58:22 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/03 21:08:42 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize > ft_strlen(dst) + 1)
		return (0);
	if (dstsize == ft_strlen(dst) + 1)
		dstsize = ft_strlen(dst);
	return (ft_strlen(dst) + dstsize);
}
