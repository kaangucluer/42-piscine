/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:08:27 by kgucluer          #+#    #+#             */
/*   Updated: 2023/04/12 11:22:30 by kgucluer         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	d;

	c = 1;
	if (argc > 1)
	{
		while (c < argc)
		{
			d = 0;
			while (argv[c][d] != '\0')
			{
				write(1, &argv[c][d], 1);
					d++;
			}
			write(1, "\n", 1);
				c++;
		}
	}
	return (0);
}
