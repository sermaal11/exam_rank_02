/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:20:09 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/05 15:37:08 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_power_of_2(unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (n % 2 == 0)
	{
		n = n / 2;
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (is_power_of_2(atoi(argv[1])) == 1)
		{
			printf("%s es una potencia de 2", argv[1]);
		}
		else
		{
			printf("%s no es una potencia de 2", argv[1]);
		}
	}
	else
	{
		printf("Numero de argumentos incorrectos");
	}
}
