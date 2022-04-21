/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta-a <chaves_87@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 01:53:55 by acosta-a          #+#    #+#             */
/*   Updated: 2022/04/20 04:47:11 by acosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	char	**ft_free(char **word)
{
	size_t	j;

	j = 0;
	while (word[j])
	{
		free(word[j]);
		j++;
	}
	free(word);
	return (NULL);
}*/

static	int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		numwords;
	int		word_len;
	char	**array;

	i = 0;
	j = 0;
	word_len = 0;
	numwords = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (numwords + 1));
	if (!s || !array)
		return (NULL);
	while (numwords > j)
	{
		while (s[i] == c && s[i != '\0'])
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			word_len++;
		}
		array [j] = ft_substr(s, i - word_len, word_len);
		word_len = 0;
		j++;
	}
	array[j] = 0;
	return (array);
}
