/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 08:59:47 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/17 17:19:22 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb >= 0 && nb <= 12)
	{
		factorial = 1;
		while (nb > 0)
		{
			factorial *= nb;
			nb--;
		}
	}
	else
		factorial = 0;
	return (factorial);
}

/* #include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d! = %d", nb, \
	ft_iterative_factorial(nb));
	printf("\n");
	return (0);
} */
