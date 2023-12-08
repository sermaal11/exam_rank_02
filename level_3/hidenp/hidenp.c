/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:17:24 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/06 13:16:44 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int len;
	int count;

	i = 0;
	j = 0;
	count = 0;
	if (argc == 3)
	{
		len = ft_strlen(argv[1]);
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{
				i++;
				count++;
			}
			j++;
		}
		if ((count == len) || argv[1][0] == '\0')
		{
			write(1, "1", 1);
		}
		else
		{
			write (1, "0", 1);
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}
