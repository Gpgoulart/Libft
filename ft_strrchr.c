/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecanha <gpecanha@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:24:11 by gpecanha          #+#    #+#             */
/*   Updated: 2022/06/07 22:24:11 by gpecanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occurence;

	if (s[0] == 0 && c == 0)
		return ((char *)&s[0]);
	else if (s[0] == 0)
		return (NULL);
	i = 0;
	last_occurence = NULL;
	if (s != NULL)
	{
		if (s[i] == 0)
			return (last_occurence = (char *)&s[i]);
		while (s[i])
		{
			if (s[i] == (char)c)
				last_occurence = (char *)&s[i];
			i++;
		}
		if (c == 0)
			return (last_occurence = (char *)&s[i]);
	}
	return (last_occurence);
}
