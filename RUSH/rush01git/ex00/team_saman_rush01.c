/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   team_saman_rush01.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilvers <dsilvers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 11:15:34 by dsilvers          #+#    #+#             */
/*   Updated: 2023/06/25 20:44:48 by dsilvers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//input and output string characters - both 00-30
//      00 02 04 06
// 16 | 00 02 04 06 | 24 return = 07
// 18 | 08 10 12 14 | 26 return = 15
// 20 | 16 18 20 22 | 28 return = 23
// 22 | 24 26 28 30 | 30
//      08 10 12 14

void	skyscraper(char	*input)
{
	char	output[] = "0 0 0 0\n0 0 0 0\n0 0 0 0\n0 0 0 0\n";
	int	a;
	int error_count;
	int error_check;

	// 0. error check for numbers > 4 or < 1
	error_count = 0;
	error_check = 0;
	while (error_count <= 15)
	{
		if (input[error_count * 2] > '4') // || input[error_count * 2] < '1')
		{
			error_check++;		
		}
		error_count++;
	}
	if (error_check > 10 )
	{
		write (1, "ERROR: One or more of your inputs are <0 or >4!", 50);
	}
	// only if no error
	else
	{
		// 1. checking for 1s and 4s in col1up - col4up (00, 02, 04, 06)
		a = 0;
		while (a <= 6)
		{
			if (input[a] == '1')
			{
				output[a] = '4';
			}
			if (input[a] == '4')
			{
				output[a] = '4';
				output[a+8] = '3';
				output[a+16] = '2';
				output[a+24] = '1';
			}
			a++;
		}
		
		// 2. checking for 1s and 4s in col1down - col4down (08, 10, 12, 14)
		a = 8;
		while (a <= 14)
		{
			if (input[a] == '1')
			{
				output[a+16] = '4';
			}
			if (input[a] == '4')
			{
				output[a-8] = '1';
				output[a] = '2';
				output[a+8] = '3';
				output[a+16] = '4';
			}
			a++;
		}
		
		// 3. checking for 1s and 4s in row1left - row4left (16, 18, 20, 22)
		a = 16;
		while (a <= 22)
		{
			if (input[a] == '1')
			{
				output[(4 * a) - 64] = '4';
			}
			if (input[a] == '4')
			{
				output[(4 * a) - 64] = '1';
				output[(4 * a) - 62] = '2';
				output[(4 * a) - 60] = '3';
				output[(4 * a) - 58] = '4';
			}
			a++;
		}
		//  4. checking for 1s and 4s in row1right - row4right (24, 26, 28, 30)
		a = 24;
		while (a <= 30)
		{
			if (input[a] == '1')
			{
				output[(4 * a) - 88] = '4';
			}
			if (input[a] == '4')
			{
				output[(4 * a) - 82] = '1';
				output[(4 * a) - 84] = '2';
				output[(4 * a) - 86] = '3';
				output[(4 * a) - 88] = '4';
			}
			a++;
		}
		write(1, &output, 32);
	}
}

int	main(int a, char *input[])
{
	skyscraper(input[1]);
	return (0);
}