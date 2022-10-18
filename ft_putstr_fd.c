/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:22:36 by mben-sal          #+#    #+#             */
/*   Updated: 2022/10/18 20:31:02 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	
	int i;
	i = 0;
	

	while (s[i])
	{
		ft_putchar_fd(s[i],fd);
		i++;
	}
	return(s);
}

int main()
{
	int fd = open("./txt", O_RDWR | O_CREAT);
	char n[] = "manar";
	ft_putstr_fd(n,fd);
}