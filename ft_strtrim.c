/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecanha <gpecanha@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:31:12 by gpecanha          #+#    #+#             */
/*   Updated: 2022/07/04 21:31:12 by gpecanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size_s;
	char		*newstring;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s = ft_strlen(s1);
	while (size_s && ft_strchr(set, s1[size_s]))
		size_s--;
	newstring = ft_substr((char *)s1, 0, size_s + 1);
	return (newstring);
}
