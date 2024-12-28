/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:47:57 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 13:47:57 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	length;

	length = ft_strlen(s1);
	copy = (char *)malloc((length + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s1, length + 1);
	return (copy);
}
