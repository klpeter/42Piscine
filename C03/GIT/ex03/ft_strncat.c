/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:47:21 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/28 17:19:44 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != 0)
	{
		d++;
	}
	while (src[s] != 0 && nb > 0)
	{
		dest[d] = src[s];
		d++;
		s++;
		nb--;
	}
	dest[d] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	d[20] = "Here to put";
	char	s[] = " this text";

	printf("%s", ft_strcat(d, s, 3));
	return (0);
}
*/