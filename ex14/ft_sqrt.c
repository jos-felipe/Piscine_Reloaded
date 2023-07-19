/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:25:25 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/18 12:17:13 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb > 0)
	{
		i = 1;
		while (i * i < nb)
		{
			i++;
			if (i == 46341)
				return (0);
			if (i * i == nb)
				return (i);
		}
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 2147483647;
	printf("%d", ft_sqrt(nb));
	return (0);
} */
