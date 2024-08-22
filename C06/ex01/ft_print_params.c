/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:05:17 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/19 15:06:02 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	if (argc > 1)
	{
		k = 1;
		while (argc > k)
		{
			i = 0;
			while (argv[k][i])
			{
				write(1, &argv[k][i], 1);
				i++;
			}
			++k;
			write(1, "\n", 1);
		}
	}
	return (0);
}
