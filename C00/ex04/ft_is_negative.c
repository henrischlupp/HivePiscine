/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:46:40 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/01 17:19:04 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write (1, "N", 1);
	else
		write (1, "P", 1);
}
/*
int	main(void)

{
	ft_is_negative(-3);
	ft_is_negative(0);
	ft_is_negative(3);
	return (0);
}
*/
