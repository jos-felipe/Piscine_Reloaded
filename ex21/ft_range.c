/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:13:06 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/19 13:23:18 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

/* #include <stdio.h>

int	main(void)
{
	int	*range;
	int	i;

	range = ft_range(1, 10);
	i = 0;
	while (i < 9)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
} */
