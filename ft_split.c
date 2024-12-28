/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:17:35 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 17:17:35 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static int	ft_split_word(char const **s, char c, char **word)
{
	size_t	len;
	size_t	j;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	*word = (char *)malloc((len + 1) * sizeof(char));
	if (!*word)
		return (0);
	j = 0;
	while (j < len)
		(*word)[j++] = *(*s)++;
	(*word)[j] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	word_count;
	size_t	i;

	if (!s)
		return (NULL);
	word_count = ft_wordcount(s, c);
	array = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		if (!ft_split_word(&s, c, &array[i]))
			return (NULL);
		i++;
	}
	array[i] = NULL;
	return (array);
}
