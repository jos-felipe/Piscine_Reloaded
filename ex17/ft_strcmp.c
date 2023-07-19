/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:33:22 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/18 10:04:10 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello world";
	char str2[] = "World Hello";
	printf("ft_strcmp = %d\n", ft_strcmp(str1, str2));
	printf("strcmp = %d\n", strcmp(str1, str2));
	return(0);
} */