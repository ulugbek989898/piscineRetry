/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 09:29:48 by uisroilo          #+#    #+#             */
/*   Updated: 2022/01/31 09:47:19 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*src && i < n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest);
}
/*
int	main()
{
	char	src[] = "Ulugbek";
	char	dest[] = "Nice";
	int		i = 13;
	ft_strncpy(dest, src, i);
	printf("dest is now : %s\n", dest);
	return (0);
}
*/
