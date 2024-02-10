/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:43:05 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/26 14:53:36 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	res;
	unsigned int	i;

	res = 0;
	i = 0;
	while (src[res])
	{
		res++;
	}
	if (size < 1)
	{
		return (res);
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	source[] = "Hello all";
	char	destination[20];
	unsigned int	copied_len;

	copied_len = ft_strlcpy(destination, source, 20);
	printf("%s\n", destination);
	printf("%d\n", copied_len);
}
*/