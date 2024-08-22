/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:37:55 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/01 16:45:39 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;

	num = 48;
	while (num >= 48 && num <= 57)
	{
		write (1, &num, 1);
		num++;
	}
}	
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
