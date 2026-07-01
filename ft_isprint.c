<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:57:13 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/22 15:27:52 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:57:13 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/10 16:11:06 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
//  ft_isprint: verifica se e caractere imprimivel
/*
#include <stdio.h>
int main(void)
{
	printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
	printf("ft_isprint('\\n') = %d\n", ft_isprint('\n'));
	return (0);
}
*/
>>>>>>> e75cd28 (new)
