/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:28:55 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/05 17:38:39 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max(int *tab, unsigned int len)
{
	unsigned int result;
	unsigned int i;

	i = 0;
	if (len == 0)
	{
		return (0);
	}
	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
		{
			result = tab[i];
		}
		i++;
	}
	return (result);
}

int main()
{
    // Crear un array de enteros para realizar pruebas
    int numeros[] = {10, 5, 8, 12, 7};

    // Calcular el valor máximo utilizando la función max
    unsigned int longitud = sizeof(numeros) / sizeof(numeros[0]);
    int resultado = max(numeros, longitud);

    // Imprimir el resultado
    printf("El valor máximo es: %d\n", resultado);

    return 0;
}
