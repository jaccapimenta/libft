/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:32:36 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/18 13:31:25 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 == *s2 && *s1 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int	main(void)
// {
// 	char	s1[] = "Arüroz";
// 	char	s2[] = "Arroi";

// 	printf("%d\n", ft_strncmp(s1, s2, 5));
// 	printf("%d", strncmp(s1, s2, 5));
// 	return (0);
// }