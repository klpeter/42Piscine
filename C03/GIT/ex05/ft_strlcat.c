/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:54:52 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/28 17:25:24 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	result;

	d = 0;
	s = 0;
	while (dest[d] != 0)
		d++;
	while (src[s] != 0)
		s++;
	result = d + s;
	s = 0;
	while (src[s] != '\0' && d < size)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	d[50] = "Here to put";
	char	s[] = " this text";
	int		ctc = ft_strlcat(d, s, 20);
	printf("%i\n", ctc);
	printf("%s", d);
	return (0);
}
*/