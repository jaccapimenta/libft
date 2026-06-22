/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:14:25 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/22 12:22:21 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[8] = "abcABC3";
// 	int		i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		printf("Caractere '%c' retorna: %d\n", str[i], ft_isalpha(str[i]));
// 		i++;
// 	}
// 	return (0);
// }