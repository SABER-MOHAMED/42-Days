/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:59:28 by msaber            #+#    #+#             */
/*   Updated: 2022/08/02 22:24:47 by msaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	re;

	re = 1;
	i = 0;
	if (power > 0)
	{
		while (i < power)
		{
			re = re * nb;
			i++;
		}
		return (re);
	}
	else if (power == 0)
		return (1);
	return (0);
}
