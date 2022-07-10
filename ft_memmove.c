/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecanha <gpecanha@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:14:40 by gpecanha          #+#    #+#             */
/*   Updated: 2022/06/08 21:14:40 by gpecanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (!dest && !source)
		return (NULL);
	if (source < dest)
		while (++i <= len)
			dest[len - i] = source[len - i];
	else
		while (len-- > 0)
			*(dest++) = *(source++);
	return (dst);
}
