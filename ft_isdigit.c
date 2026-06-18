/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:34:31 by jacavalc          #+#    #+#             */
/*   Updated: 2026/06/10 16:11:06 by jacavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int main() {
//     char teste1 = '7';
//     char teste2 = 'a';

//     if (isdigit(teste1)) {
//         printf("'%c' e um digito.\n", teste1);
//     }
//
//     if (!isdigit(teste2)) {
//         printf("'%c' nao e um digito.\n", teste2);
//     }

//     return 0;