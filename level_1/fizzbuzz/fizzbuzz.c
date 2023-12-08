/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:00:41 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/04 14:25:16 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_write_number(int num)
{
	char str[10] = "0123456789";

	if (num > 9)
	{
		ft_write_number(num / 10);
	}
	write(1, &str[num % 10], 1);
}

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if ( i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			ft_write_number(i);
		}
		write(1, "\n", 1)
			write(1, "\n", 1);;
		i++;
	}
}
