/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:15:13 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/28 17:18:06 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	total;
	int	cat;

	total = 0;
	cat = 0;
	while (dest[cat] != '\0')
	{
		total++;
		cat++;
	}
	while (src[total - cat] != '\0')
	{
		dest[total] = src[total - cat];
			total++;
	}
	dest[total] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	d[20] = "Here to put";
	char	s[] = " this text";

	printf("%s", ft_strcat(d, s));
	return (0);
}
*/