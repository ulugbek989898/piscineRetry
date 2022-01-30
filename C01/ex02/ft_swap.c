/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:01:01 by uisroilo          #+#    #+#             */
/*   Updated: 2022/01/30 16:08:10 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main()
{
	int	a;
	int	b;

	a = 45;
	b = 60;
	ft_swap(&a, &b);
	printf("a = %d,  b = %d \n", a, b);
	return (0);
}
*/
