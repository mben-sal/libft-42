/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:09:04 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/08 07:45:13 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_isascii(int arg)
{
    if(arg>= 0 && arg <= 126)
        return(1);
    else 
        return(0);
}
