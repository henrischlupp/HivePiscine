/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:45:35 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/10 21:15:39 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int nb = 4;

    printf("Before concatenation: %s\n", dest);
    ft_strncat(dest, src, nb);
    printf("After concatenation: %s\n", dest);

    return 0;
}
*/
