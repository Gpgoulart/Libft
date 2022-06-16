/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecanha <gpecanha@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:35:23 by gpecanha          #+#    #+#             */
/*   Updated: 2022/06/07 22:35:23 by gpecanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
								//string grande      //string pequena
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;					   //0 + 7		0+7<10
		while (needle[j] == haystack[i + j] && i + j < len) // l == l && 0 + 0 < 10
		{
			if (needle[j + 1] == '\0') // 
			{
				return ((char*)haystack + i); //return haystack - positions of [i] 
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
