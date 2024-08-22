/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:31:47 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/12 13:45:02 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}
/*
#include<stdio.h>

int main()
{
	char teststring[] = "butter_fly";
	int size = ft_strlen(teststring);
	printf("The size of the string is: %d\n", size);
	return(0);
}
*/
