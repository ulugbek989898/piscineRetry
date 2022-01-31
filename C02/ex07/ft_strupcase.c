/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:51:53 by uisroilo          #+#    #+#             */
/*   Updated: 2022/01/31 12:07:36 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = (*str - 'a') + 'A';
		str++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "Ulugbek";
	printf("res is : %s\n", ft_strupcase(str));
}
*/
