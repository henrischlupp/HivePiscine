/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:37:52 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/19 14:17:46 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	argc = 0;
	while (argv[0][argc] != '\0')
	{
		write(1, &argv[0][argc], 1);
		argc++;
	}
	write(1, "\n", 1);
	return (0);
}
