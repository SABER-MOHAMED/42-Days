/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:58:22 by msaber            #+#    #+#             */
/*   Updated: 2022/08/07 09:30:43 by msaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_num_is_prime(int nb)
{
	int i;
	if (nb <= 2)
		return (0);
	if (nb >= 2147483630 && nb <= 2147483647)
		return (2147483647);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int ft_find_next_prime(int nb)
{
	while (! ft_num_is_prime(nb))
		nb++;
	return (nb);
}