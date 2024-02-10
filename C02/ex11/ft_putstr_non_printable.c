/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:14:47 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/26 10:03:45 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(*str >> 4) & 0x0F]);
			ft_putchar("0123456789abcdef"[*str & 0x0F]);
		}
		str++;
	}
}
/*
int	main(void)
{
	char	str[] = "Coucou\nttu vas bien ?";

	ft_putstr_non_printable(str);
	ft_putchar('\n');
	return (0);
}
*/