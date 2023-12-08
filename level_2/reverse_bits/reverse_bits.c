/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:59:15 by smarin-a          #+#    #+#             */
/*   Updated: 2023/12/05 18:44:07 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
	int i;
	unsigned char res;

	i = 8;
	res = 0;
	while (i > 0);
	{
		res = res * 2 + (octet % 2);
		octect = octect / 2;
		i--;
	}
	return (res);
}
