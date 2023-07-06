/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:13:38 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/29 15:45:12 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	parity;
	int	number;

	parity = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		parity++;
	str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10;
		number = number + *str - 48;
		str++;
	}
	if (parity % 2 != 0)
		return (-number);
	return (number);
}
/*
int	main(void)
{
	char	*s = "\t\v\n--+---+1234abc567";

	printf("%d\n", ft_atoi(s));
}
*/