/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:47:21 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/28 20:08:02 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] != 0)
	{
		d++;
	}
	while (src[s] != 0 && s < nb)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[20] = "Here to put";
	char	b[] = " this text";

	printf("%s", ft_strncat(a, b, 5));
}
*/