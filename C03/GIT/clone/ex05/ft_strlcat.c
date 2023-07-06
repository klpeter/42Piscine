/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:54:52 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/28 22:55:28 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ssize;
	unsigned int	dsize;
	unsigned int	result;

	ssize = 0;
	dsize = 0;
	result = 0;
	while (src[ssize] != '\0')
		ssize++;
	if (size == 0)
		return (ssize);
	while (dest[dsize] != '\0')
		dsize++;
	if (size <= dsize)
		return (size + ssize);
	while (size > 0 && dsize < size - 1 && src[result] != '\0')
	{
		dest[dsize + result] = src[result];
		result++;
	}
	dest[dsize + result] = '\0';
	return (ssize + dsize);
}
/*
int	main(void)
{
	char	d[50] = "Here to put";
	char	s[] = " this text";
	int		ctc = ft_strlcat(d, s, 0);
	printf("%i\n", ctc);
	printf("%s", d);
	return (0);
}
*/