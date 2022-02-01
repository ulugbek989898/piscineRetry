/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:21:06 by uisroilo          #+#    #+#             */
/*   Updated: 2022/02/01 15:26:56 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 1;
	res = 1;
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
/*
int	main()
{
	printf("res is:%d\n", ft_iterative_power(3, 4));
	return (0);
}
*/
