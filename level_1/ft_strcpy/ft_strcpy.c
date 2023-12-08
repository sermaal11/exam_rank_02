/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:31:00 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/04 14:49:04 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char * s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(void)
{
	char s2[] = "hola"; 
	char s1[5];

	printf("Valores s1 y s2 antes de aplicar la funcion:\n");
	printf("s2 = %s\n", s2);
	printf("s1 = %s\n", s1);
	ft_strcpy(s1, s2);
	printf("Valores de s1 y s2 dspues de aplicar la funcion:\n");
	printf("s2 = %s\n", s2);
	printf("s1 = %s\n", s1);
	return (0);
}
