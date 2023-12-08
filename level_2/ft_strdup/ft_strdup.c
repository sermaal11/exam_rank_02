/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:01:30 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/05 11:23:01 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	int len;
	int i;
	char *dup;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dup = (char *)malloc(sizeof (char) * (len + 1));
	if (dup != NULL)
	{
		while(src[i] != '\0')
		{
			dup[i] = src[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}

int main(int argc, char **argv)
{
	char *dup;
	
	if (argc == 2)
	{
		printf("Valores de argv[1] y dup antes de la duplicacion\n");
		printf("Argv[1]: %s\n", argv[1]);
		printf("dup: %s\n", dup);
		dup = ft_strdup(argv[1]);
		if (dup != NULL)
		{
			printf("Valores de argv[1] y dup despues de la dupicacion\n");
			printf("Argv[1]: %s\n", argv[1]);
			printf("dup: %s\n", dup);
			free(dup);
		}
		else
		{
			printf("Error al duplicar la cadena\n");
		}
	}
	else
	{
		printf("\n");
	}
	return (0);
}
