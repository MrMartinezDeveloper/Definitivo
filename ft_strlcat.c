/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:48:11 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 13:48:11 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	copy_length;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dst_length >= dstsize)
		return (dstsize + src_length);
	copy_length = dstsize - dst_length - 1;
	if (copy_length > src_length)
		copy_length = src_length;
	ft_memcpy(dst + dst_length, src, copy_length);
	dst[dst_length + copy_length] = '\0';
	return (dst_length + src_length);
}
