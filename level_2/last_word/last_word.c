/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:38:09 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/05 17:28:26 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		if(argv[1][i - 1] == 9 || argv[1][i - 1] == 32)
		{
			while(argv[1][i - 1] == 9 || argv[1][i - 1] == 32)
				i--;
		}
		if (argv[1][i - 1] >= 33 && argv[1][i - 1] <= 126)
		{
			while (argv[1][i - 1] >= 33 && argv[1][i - 1] <= 126)
				i--;
		}
		while (argv[1][i] >= 33 && argv[1][i] <= 126)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
