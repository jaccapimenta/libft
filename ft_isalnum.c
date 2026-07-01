<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:37:03 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/22 15:27:24 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha (c) || ft_isdigit (c));
}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:37:03 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/10 16:11:06 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha (c) || ft_isdigit (c));
}
// ft_isalnum: verifica se e letra ou numero
/*
#include <stdio.h>
int main(void)
{
	printf("ft_isalnum('Z') = %d\n", ft_isalnum('Z'));
	printf("ft_isalnum('@') = %d\n", ft_isalnum('@'));
	return (0);
*/
>>>>>>> e75cd28 (new)
