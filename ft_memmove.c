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
    // Caso os ponteiros sejam nulos ou n seja 0, não faz nada
    if (!dest && !src)
        return (NULL);

    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    // Caso 1: Destino vem antes da origem. Copia normal (da esquerda para a direita)
    if (d < s) {
        for (size_t i = 0; i < n; i++) {
            d[i] = s[i];
        }
    } 
    // Caso 2: Destino vem depois da origem. Copia de trás para frente (da direita para a esquerda)
    else if (d > s) {
        for (size_t i = n; i > 0; i--) {
            d[i - 1] = s[i - 1];
        }
    }

    return (dest);
}
// dest: Ponteiro para a área de memória de destino.
// src: Ponteiro para a área de memória de origem.
// count: Número de bytes a serem copiados.
// Retorno: Retorna o mesmo ponteiro dest

// O que acontece passo a passo:
// Texto original: [a, b, c, d, e, f, g]

// Queremos pegar 3 bytes a partir do índice 0 (a, b, c) e colar no índice 2.

// Como há sobreposição (o 'c' faz parte do destino e da origem), a memmove copia de trás para frente de forma inteligente.

// Resultado final: [a, b, a, b, c, f, g] (imprime: ababcfg)