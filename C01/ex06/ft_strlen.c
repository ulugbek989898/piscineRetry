/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:53:39 by uisroilo          #+#    #+#             */
/*   Updated: 2022/01/30 19:57:52 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		*str++;
	}
	return (i);
}
/*
int	main()
{
	char	we[] = "NiceWork";

	printf("str len is = %d\n", ft_strlen(we));
	return (0);
}
*/
