/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:21:54 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/04 20:21:33 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//busca en s la primera ocurrencia de los caracteres de reject

size_t ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		return (printf("%zu\n", ft_strcspn(argv[1], argv[2])));
	}
	else
	{
		printf("\n");
	}
	return (0);
}
