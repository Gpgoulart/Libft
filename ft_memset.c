/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecanha <gpecanha@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:31:42 by gpecanha          #+#    #+#             */
/*   Updated: 2022/06/06 17:31:42 by gpecanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)s; //p = america 
	while (len--) // posicao 4 --
	{
		*p = (unsigned char)c;  // posicao len[] = y
		p++; 
	}
	return (s);
}