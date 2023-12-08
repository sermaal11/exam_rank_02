/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:08:36 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/04 15:44:38 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar_n(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		--i;
	}
}

void repeat_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			ft_putchar_n(*str, *str + 1 - 'a');
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			ft_putchar_n(*str, *str + 1 - 'A');
		}
		else
		{
			write(1, str, 1);
		}
		++str;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
		write(1, "\n",1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
