/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:57:21 by uisroilo          #+#    #+#             */
/*   Updated: 2022/02/01 14:18:54 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb < 2)
		return (1);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*
int	main()
{
	int	nb = 5;
	printf("res is : %d\n", ft_iterative_factorial(nb));
}
*/
