/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:20:16 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/06 14:20:36 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int n;
	
	if (a == 0 || b == 0)
	{
		return (0);
	}
	if (a > b)
	{
		n = a;
	}
	else
	{
		n = b;
	}
	while (1)
	{
		if (n % a == 0 && n % b == 0)
		{
			return (n);
		}
		++n;
	}
}

int main() 
{
    unsigned int num1, num2;

    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer número positivo: ");
    scanf("%u", &num1);

    printf("Ingrese el segundo número positivo: ");
    scanf("%u", &num2);

    // Llamar a la función lcm y mostrar el resultado
    unsigned int result = lcm(num1, num2);
    printf("El MCM de %u y %u es: %u\n", num1, num2, result);

    return 0;
}
