/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:31:47 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/18 17:01:35 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (dest == src)
		return (dest);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (pdest > psrc)
	{
		while (n > 0)
		{
			n--;
			*(pdest + n) = *(psrc + n);
		}
	}
	else
	{
		while (n > 0)
		{
			*pdest++ = *psrc++;
			n--;
		}
	}
	return (dest);
}
