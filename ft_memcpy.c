/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:11:54 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/06 21:36:40 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t	n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main ()
// {
// 	char *n;// = "test basic du memcpy !";
// 	// char src[22];
// 	// char dst[22];
// 	// char *s;
// 	// s = memcpy("         ", ((void *)0), 3);
// 	n = memcpy("ahmed", "ahmed", -1);
// 	printf("%s\n", n);
// }
