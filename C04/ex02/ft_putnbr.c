/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:15:33 by msaber            #+#    #+#             */
/*   Updated: 2022/08/02 15:48:42 by msaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	nbr;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	if (nb < 0 && nb > -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	if (nb <= 9 && nb >= 0)
	{
		nbr = nb + 48;
		write(1, &nbr, 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}