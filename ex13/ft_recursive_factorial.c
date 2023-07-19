/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:23:40 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/17 17:16:43 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb > 0)
		factorial = nb * ft_recursive_factorial(nb - 1);
	return (factorial);
}

/* #include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 1;
	printf("%d! = %d", nb, \
	ft_recursive_factorial(nb));
	printf("\n");
	return (0);
} */
