/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:34:33 by uisroilo          #+#    #+#             */
/*   Updated: 2022/01/29 14:40:43 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;
	char	p;

	c = 'N';
	p = 'P';
	if (n < 0)
		write(1, &c, 1);
	else
		write(1, &p, 1);
}

/*
int	main()
{
	int	n;

	n = 0;
	ft_is_negative(n);
	return (0);
}
*/
