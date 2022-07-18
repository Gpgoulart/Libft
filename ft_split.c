/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecanha <gpecanha@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:40:42 by gpecanha          #+#    #+#             */
/*   Updated: 2022/07/10 17:46:15 by gpecanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != 0)
		{
			i++;
			while (*s != c && *s)
				s++;
		}
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	i;
	char	**mall;
	size_t	start;

	j = 0;
	i = 0;
	if (!(s))
		return (0);
	mall = ft_calloc(count(s, c) + 1, sizeof(char *));
	if (!mall)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start != i)
			mall[j++] = ft_substr(s + start, 0, i - start);
	}
	return (mall);
}
