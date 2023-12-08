/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:39:10 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/05 17:57:54 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
	int i;
	unsigned char bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int main(int argc, char *argv[]) 
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <numero>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Convertir el argumento a un número entero
    unsigned char numero = atoi(argv[1]);

    // Imprimir la representación binaria del número
    print_bits(numero);

    return EXIT_SUCCESS;
}
