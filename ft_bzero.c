/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:24:17 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/18 13:30:51 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
// ft_bzero: preenche uma area da memoria com '\0'
/*
#include <stdio.h>
int	main(void)
{
	char	buffer[6] = "Hello";
	int		i;

	ft_bzero(buffer, 5);

	i = 0;
	while (i < 6)
	{
		printf("buffer[%d] = %d\n", i, buffer[i]);
		i++;
	}
	return (0);
}
*/
