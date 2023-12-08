/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:45:34 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/05 19:40:18 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		if (argv[1] != '\0')
		{
			while (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				write(1, &argv[1][i], 1);
				if (argv[1][i + 1] == '_')
				{
					i = i + 2;
					argv[1][i] = argv[1][i] - 32;
					write(1, &argv[1][i], 1);
				}
				i++;
				if (argv[1][i] == '_')
				{
					i++;
					argv[1][i] = argv[1][i] - 32;
					write(1, &argv[1][i], 1);
					i++;
				}
			}
		}
	}
	else
	{
		return (0);
	}
	return (0);
}
