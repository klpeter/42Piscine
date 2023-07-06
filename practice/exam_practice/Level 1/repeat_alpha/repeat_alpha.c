/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:56:33 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/07/05 21:37:09 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int countletters(char c)
{
	int	count;

	count = 0;
	if(c >= 'A' && c <= 'Z')
		count = c - 'A' + 1;
	else if(c >= 'a' && c <= 'z')
		count = c - 'a' + 1;
	return (count);
}

int	main(int argc, char *argv[])
{
	int	mult;

	if (argc == 1)
		write(1, "\n", 1); 
	else if (argc > 2)
		write(1, "\n", 1);
	else
	{
		while(*argv[1])
		{
			mult = countletters(*argv[1]);
	
		
			while (mult--)
			{
				write(1, argv[1], 1);
	
			}
			argv[1]++;
		}
	}
}