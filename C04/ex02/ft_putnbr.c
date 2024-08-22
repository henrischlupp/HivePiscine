/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:36:30 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/12 17:47:53 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
/*
#include<stdio.h>
int main()
{
	printf("Max cap:\n");
	ft_putnbr(2147483647);
	printf("\nMin cap:\n");
	ft_putnbr(-2147483648);
	printf("\nShould be 42\n");
	ft_putnbr(42);
	printf("\nRandom negative number\n");
	ft_putnbr(-123);
	return(0);
}
*/
