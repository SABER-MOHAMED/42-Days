/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:43:37 by msaber            #+#    #+#             */
/*   Updated: 2022/08/04 19:07:47 by msaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char *str;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (argv[i][0] > argv[j][0])
			{
				str = argv[i];
				argv[i] = argv[j];
				argv[j] = str;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
}
