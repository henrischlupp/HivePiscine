/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:45:40 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/01 15:21:44 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	dingle;

	dingle = 97;
	while (dingle >= 97 && dingle <= 122)
	{
		write (1, &dingle, 1);
		dingle++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
