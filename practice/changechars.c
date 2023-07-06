/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   changechars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:56:05 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/04 15:02:05 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	changechars(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] % 3 == 0 && i > 1)
			str[i] = '5';
		if (str[i - 6] % 5 == 0)
			str[i] = '3';
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	argc = 1;
	changechars(argv[argc]);
}
