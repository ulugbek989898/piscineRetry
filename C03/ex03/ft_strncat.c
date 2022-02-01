/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:46:26 by uisroilo          #+#    #+#             */
/*   Updated: 2022/02/01 10:04:54 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (*(str + i))
// 		i++;
// 	write(1, str, i);
// }

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*dest)
		dest++;
	while (*src && i < n)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (dest);
}

// int 	main(void)
// {
// 	char	r[] = {"Good day , 1.02.2022\n"};
// 	char	t[20] = {"Hello "};

// 	ft_strncat(t, r, 12);
// 	ft_putstr(t);
// 	return (0);
// }
