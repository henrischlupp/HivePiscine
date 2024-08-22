/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:46:49 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/20 19:43:13 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/*
#include<stdio.h>
int	main()
{
	int	min = 60;
	int	max = 70;
	int *temp;
	int	i;
	i = 0;
	temp = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", temp[i]);
		i++;
	}
}
*/
