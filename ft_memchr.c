/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecanha <gpecanha@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:55:26 by gpecanha          #+#    #+#             */
/*   Updated: 2022/06/08 17:55:26 by gpecanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *str ;
    unsigned char chr ;

    str = (unsigned char *)s;
    chr = (unsigned char) c;
    i=0;

    while (i < n )
    {
        if (str[i] == chr)                                    //4
        {                                   //13                                                   //9     
            return(str + i);  //retorna a string com as posicoes preenchidas coorrespondentes ao size_t n
          
        }
       i++;
    }
    return(NULL);
}
