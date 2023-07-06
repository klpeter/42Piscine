/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:17:09 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/06 19:25:05 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while(src[i])
	{
		i++;
	}
	return (i);
}

char	ft_strcpy(char *str, char *src)
{
	int i;

	i = 0;
	while(*src)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(char *src)
{
	char	*str;
	
	str = (char *)malloc(ft_strlen(src) + 1);
	if (str)
	{
		ft_strcpy(str, src);
	}
	return (str);
}