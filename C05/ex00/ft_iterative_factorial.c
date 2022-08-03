/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:52:54 by msaber            #+#    #+#             */
/*   Updated: 2022/08/02 19:34:22 by msaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long int	i;
	long int	facto;

	if (nb > 1)
	{
		i = nb - 1;
		facto = nb;
		while (i > 0)
		{
			facto = facto * i;
			i--;
		}
		return (facto);
	}
	if (nb < 0)
		return (0);
	return (1);
}
