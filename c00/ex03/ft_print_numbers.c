/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:06:40 by kgucluer          #+#    #+#             */
/*   Updated: 2023/03/27 15:52:45 by kgucluer         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	sifir;

	sifir = '0';
	while (sifir <= '9')
	{
		write(1, &sifir, 1);
		sifir++;
	}
}
