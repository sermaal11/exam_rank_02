/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:45:37 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/04 19:06:51 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	//controlo espacios y ascci entre 9 y 13
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	//Contrlo si hay signos negativos antes de las cifras
	if (*str == '-')
	{
		sign = -1;
	}
	//Controlo signos + y -
	if (*str == '+' || *str == '-')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
