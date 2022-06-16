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

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *tmp;
	char *dest;
    size_t i;

    i = n;
	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (i)
			dest[n] = tmp[n];
            --i;
	}
	else
		ft_memcpy(dest, tmp, n); // copia de src para dst com o bytes do src
	return (dst);
}

