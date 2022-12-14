/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:16:18 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/12 16:25:10 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;
	size_t	j;

	d = (char *)haystack;
	s = (char *)needle;
	if (!*s)
		return (d);
	i = 0;
	while (i < len && d[i])
	{
		j = 0;
		while (d[i + j] == s[j] && len - i >= ft_strlen(s))
		{
			if (!s[j + 1])
				return (d + i);
			else
				j++;
		}
		i++;
	}
	return (NULL);
}
