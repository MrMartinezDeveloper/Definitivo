/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:47:23 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 13:47:23 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*destiny;
	const unsigned char	*origin = (const unsigned char *)src;

	destiny = (unsigned char *)dst;
	if (destiny < origin)
	{
		while (len--)
			*destiny++ = *origin++;
	}
	else
	{
		destiny += len;
		origin += len;
		while (len--)
			*--destiny = *--origin;
	}
	return (dst);
}
