/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:07:49 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/04 16:37:24 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rotone(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
		{
			ft_putchar(*str + 1);
		}
		else if (*str == 'z' || *str == 'Z')
		{
			ft_putchar(*str - 25);
		}
		else
		{
			ft_putchar(*str);
		}
		++str;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		rotone(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
}
