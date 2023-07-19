/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:39:06 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/19 13:11:37 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		len;

	len = ft_strlen(src);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char *str = "Hello World!";
	printf("%s\n", ft_strdup(str));
	return (0);
} */
