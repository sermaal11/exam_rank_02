/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:36:50 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/05 14:27:28 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (0);
}

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i;

	i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i])  == 0)
		{
			break;
		}
		i++;
	}
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Mi funcion: %lu\n", ft_strspn(argv[1], argv[2]));
		printf("Original: %lu\n", strspn(argv[1], argv[2]));
	}
	else
	{
		printf("Numero de argumentos incorrectos\n");
	}
	return (0);
}
