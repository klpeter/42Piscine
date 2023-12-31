/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:43:44 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/06 16:39:16 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *c)
{
	int	par;
	int n;
	int	i;

	par = 0;
	n = 0;
	i = 0;
	while(c[i])
	{
		if(c[i] == '-')
		{
		par++;
		}
		i++;
	}
	i = 0;
	while((c[i]) && c[i] < '0')
	{
		i++;
	}
	while(c[i] >= '0' && c[i] <= '9')
	{
		n *= 10;
		n += c[i] - '0';
		i++;
	}
	if (par % 2 == 0)
		return(n);
	return(-n);	
}

int	main(void)
{
	char	*str = "\t\v\n--+---+1234abc567";
	printf("%d", ft_atoi(str));
}
