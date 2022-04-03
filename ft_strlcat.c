/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:58:22 by phongpai          #+#    #+#             */
/*   Updated: 2022/04/03 22:29:43 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	j;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	j = len_dst;
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	while (src[i] && i < dstsize - len_dst - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (len_dst + len_src);
}
