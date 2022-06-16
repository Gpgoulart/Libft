/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecanha <gpecanha@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:29:21 by gpecanha          #+#    #+#             */
/*   Updated: 2022/06/10 19:43:22 by gpecanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int    ft_atoi (const char *str)
{
    int i;
    int num;
    int result;
    i   = 0;
    num =   1;
    result  =   0;
    while (str[i] == '\n' ||  str[i] == ' ' || str[i] == '\r' )
    {
        i++;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i++] == '-' )
            {
                num = -1;
            }
    }
        while (str[i]>= '0' && str[i] <= '9')
            result = result * 10 +(str[i] - '0');
            i++;
        return  (   (int) result * num);
}