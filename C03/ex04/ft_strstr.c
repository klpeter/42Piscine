/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkovacs- <pkovacs-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:52:59 by pkovacs-          #+#    #+#             */
/*   Updated: 2023/06/28 22:18:47 by pkovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	f;

	if (*to_find == '\0')
		return (str);
		s = 0;
	while (str[s] != '\0')
	{	
		f = 0;
		if (str[s] == to_find[f])
		{
			while (str[s + f] == to_find[f])
			{
				f++;
				if (to_find[f] == '\0')
					return (&str[s]);
			}
		}
		s++;
	}
	return (0);
}
/*
int	main(void)
{
	char	c[] = "This is a very bad code";
	char	f[] = "bad";
	char *result = ft_strstr(c, f);
	if (result != 0)
	{
		printf("%s\n", result);
	}
	else
	{
		printf("Substring not found");
	}
printf("%s", strstr(c, f));
}
*/