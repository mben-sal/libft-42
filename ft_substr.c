/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:14:51 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/14 12:32:17 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,
size_t len)
{
	char *str;
    int i;
    int j;
    char *ptr;
    
    str = (char *)s;
    j = start;
    i = 0;
	while(str[j] && i < len )
    {
        i++;
        j++;
    }
    ptr = (char*)malloc(j*sizeof(char) + 1);
    if(!ptr)
      return(NULL);
	j = start;
    i = 0;
    while(str[j] && i < len )
    {
        ptr[i] = str[j];
        i++;
        j++;
    }
	ptr[i] = '\0';
    return(ptr);
    
}

int main ()
{
    char *r;
    r = "manarbensalah1337";
    
    printf("%s",ft_substr(r,1,12));
}