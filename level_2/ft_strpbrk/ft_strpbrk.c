/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:23:37 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/05 12:20:55 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


char *ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	
	i = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}
	while (s1[i] != '\0')
	{
		i = 0;
		while (s2[i] != '\0')
		{
			if (*s1 == s2[i])
			{
			return ((char *) s1);
			}
			i++;
		}
		s1++;
	}
	return (0);
}


int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_strpbrk(argv[1], argv[2]));
		printf("%s\n", strpbrk(argv[1],  argv[2]));
	}
	else
	{
		printf("\n");
	}
}
