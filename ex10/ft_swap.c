/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:30:06 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/14 18:59:32 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/* #include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	printf("%d%d", a, b);
	ft_swap(&a, &b);
	printf("%d%d", a, b);
	return (0);
} */