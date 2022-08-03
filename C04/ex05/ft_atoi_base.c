/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:57:10 by msaber            #+#    #+#             */
/*   Updated: 2022/08/02 17:38:28 by msaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (0);
}
// check base if its clean of errors 
int	ft_check(char *str)
{
	int	i;
	int	J;
	int	base_len;

	i = 0;
	base_len = ft_strlength(str);
	if (base_len == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < base_len)
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
int		ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	nb = 0;
	sign = 0;
	i = 0;
	while (str[i] == 32 || str[i] == '\t')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (sign % 2 != 0)
		return (-nb);
	return (nb);
}

int ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	i;
	int	result;
	int	len;
	
	result = 0;
	len = ft_strlength(base);

	if (ft_check(base))
	{
		i = 0;
		result = nb;
		nb = ft_atoi(str);
		while (base[i] != '\0')
		{
			result = result * (len + i);
			i++;
		}
		return (result);
	else 
		return (0);
	}