/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:24:23 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/04 18:31:37 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
	{
		if (argv[1][0] >= 'a' && argv[1][0] <= 'z')
		{
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				{
					write(1, &argv[1][i], 1);	
				}
				else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				{
					write(1, "_", 1);
					argv[1][i] = argv[1][i] + 32;
					write(1, &argv[1][i], 1);
				}
				i++;
			}
		}
	}
	return (0);
}
