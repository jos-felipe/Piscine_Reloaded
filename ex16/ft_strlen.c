/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:19:03 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/17 14:23:37 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/* #include <stdio.h>

int	main(void)
{
	char str[30] = "Exercise 15 : ft_putstr. In";
	printf("%d\n", ft_strlen(str));
	return (0);
} */