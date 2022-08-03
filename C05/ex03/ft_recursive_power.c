/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:49:19 by msaber            #+#    #+#             */
/*   Updated: 2022/08/02 22:27:25 by msaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 0)
		return (1);
	return (0);
}
