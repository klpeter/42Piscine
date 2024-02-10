/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:43:46 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/28 19:28:00 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]) && n > 0)
	{
		i++;
		n--;
	}
	if (n > 0)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main(void)
{
	int	result;
	char	c[] = "Hella";
	char	d[] = "Hello";

	printf("%i", ft_strncmp(c, d, 3));
}
*/