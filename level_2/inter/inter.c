/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:28:27 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/05 15:19:18 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int iter(char *str, char c, int len)
{
	int i;

	i = 0;
	while (str[i] && (i < len || len == -1))
	{
		if (str[i++] == c)
		{
			return (1);
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))
			{
				write(1, &argv[1][i], 1);
			}
			i += 1;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}
