/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:22:22 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/18 19:31:56 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;
    unsigned int len;
    char *str;
    char *ptr;
    
    str = (char *)s;
    i = 0;
    while(str[i])
    {
        str[i] = f(i, str[i]);
    }
    str[i] = '\0';
    return(str);
}
int ft_edit(unsigned int i ,char c)
{
    
   c += i;
    return(c);
}
int main ()
{
	char m[]= "manar";
	ft_striteri(m,&ft_edit());
	printf("%s",m);
}