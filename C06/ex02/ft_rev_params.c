/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:43:07 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/19 18:13:35 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	k;

	if (argc > 1)
	{
		k = argc - 1;
		while (k > 0)
		{
			i = 0;
			while (argv[k][i])
			{
				write(1, &argv[k][i], 1);
				i++;
			}
			write(1, "\n", 1);
			k--;
		}
	}
	return (0);
}
