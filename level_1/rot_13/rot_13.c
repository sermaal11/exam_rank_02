/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:55 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/04 16:07:22 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
}
