<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:30:37 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/22 16:00:04 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*txt;

// 	txt = "Jac";
// 	printf("Quantidade: %zu", ft_strlen(txt));
// }
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:30:37 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/12 14:50:26 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
// ft_strlen: conta quantos caracteres existem antes do '\\0'
/*
#include <stdio.h>
int main(void)
{
	printf("ft_strlen(\"Hello\") = %zu\n", ft_strlen("Hello"));
	return (0);
}	
*/

>>>>>>> e75cd28 (new)
