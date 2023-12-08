/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:21:36 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/05 12:36:25 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str)
{
	int len;
	int i;
	char temp;
	
	len = 0;
	i = -1;
	while (str[len] != '\0')
	{
		len ++;
	}
	while (++i < len / 2)
	{
		temp = str[i];			 	//Almacena el caracter actual en la temporal
		str[i] = str[len - 1 -i];	//Copia el caracter del final al principio
		str[len - 1 - i] = temp;	//Copia el temp al final del string
	}
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("str original: %s\n", argv[1]);
		printf("str despues de aplicar la funcion\n");
		printf("str modificado: %s\n", ft_strrev(argv[1]));
	}
	else
	{
		printf("\n");
	}
}
