/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:06:15 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/19 12:58:04 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/* void	ft_putchar(char c)
{
	write(1, &c, 1);
} */

void	ft_putstr(const char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, const char **argv)
{
	int			i;
	int			j;
	const char	*tmp;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}		
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
	return (0);
}
