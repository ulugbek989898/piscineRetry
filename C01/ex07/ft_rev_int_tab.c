/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:02:06 by uisroilo          #+#    #+#             */
/*   Updated: 2022/01/30 20:22:04 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		counter;
	char	temp;

	counter = 0;
	while (counter < size - 1)
	{
		temp = tab[size];
		tab[size] = tab[counter];
		tab[counter] = temp;
		counter++;
		size--;
	}
}
