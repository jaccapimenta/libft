/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 20:06:23 by jacavalc          #+#    #+#             */
/*   Updated: 2026/07/06 15:14:41 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (s);
}
// ft_memset: preenche uma area da memoria com um caractere */
/*
#include <stdio.h>
int main(void)
{
	char buffer[6] = "Hello";
	ft_memset(buffer, 'X', 2);
	buffer[5] = '\0';
	printf("ft_memset = %s\n", buffer);
	return (0);
}
*/