/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:02:06 by msaber            #+#    #+#             */
/*   Updated: 2022/08/02 15:44:13 by msaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_clean(char *str)
{
	int	i;
	int	j;
	int	s_length;

	s_length = ft_strlength(str);
	i = 0;
	j = 0;
	if (str[i] == '\0' && s_length == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] > 126 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < s_length)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
		return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (is_clean(base) == 1)
	{
		len = ft_strlength(base);
		if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base (-nbr, base);
		}
		if (nbr >= len)
		{
			ft_putnbr_base (nbr / len, base);
			ft_putnbr_base (nbr % len, base);
		}
		if (nbr < len)
			write(1, &base[nbr], 1);
	}
}
