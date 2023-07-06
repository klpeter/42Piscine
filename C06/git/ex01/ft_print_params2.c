/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:53:16 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/04 21:14:48 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	param;
	int	i;

	i = 0;
	param = 1;
	while (param < argc && argc > 0)
	{
		while (argv[param][i] != '\0')
		{
			write(1, &argv[param][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		param++;
	}
	return (0);
}
