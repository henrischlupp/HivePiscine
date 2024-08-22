/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:55:59 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/01 15:22:38 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	jingle;

	jingle = 123;
	while (jingle-- >= 98)
		write (1, &jingle, 1);
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
