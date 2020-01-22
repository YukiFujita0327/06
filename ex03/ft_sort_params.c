/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:50:39 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/22 18:42:56 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (!(s1[n] == '\0' && s2[n] == '\0'))
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
		n++;
	}
	return (0);
}

void	ft_write(char *str1, char *str2)
{
	char	*tmp;

	tmp = str1;
	str1 = str2;
	str2 = tmp;
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = argc - 1;
		while (i < j)
		{
			if (ft_strcmp(argv[j], argv[j - 1]) < 0)
				ft_write(argv[j], argv[j - 1]);
			j--;
		}
		i++;
	}
	i = 1;
	while (i <= argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
