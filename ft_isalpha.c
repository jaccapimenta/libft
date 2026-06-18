/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:14:25 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/10 16:10:06 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// int	ft_isalpha(char *str)
// {
// 	int		i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (!(str[i] >= 65 && str[i] <= 90)
// 			&& !(str[i] >= 97 && str[i] <= 122))
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// int	main(void)
// {
// 	char	str[8] = "abcABC3";

// 	printf("Retorna: %d", ft_isalpha(str));
// 	return (0);
// }

/*
Para as funções de classificação de caracteres (isalpha, isdigit,
isalnum, isascii, isprint), o valor de retorno deve ser:
• 1 se o caractere corresponder à classe testada
• 0 se o caractere não corresponder

int     ft_isalpha(int c);
*/