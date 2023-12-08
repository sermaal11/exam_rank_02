/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:32:57 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/04 18:44:59 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
		{
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		}
		if (argv[2][0] == '-')
		{
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		}
		if (argv[2][0] == '*')
		{
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		}
		if (argv[2][0] == '/')
		{
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		}
		if (argv[2][0] == '%')
		{
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
		}
		printf("\n");
	}
	else
	{
		printf("\n");
	}
	return (0);
}
