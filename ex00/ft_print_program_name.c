/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:15:36 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/22 18:49:33 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int n;

	n = 0;
	while (argv[0][n])
	{
		write(1, &argv[0][n], 1);
		n++;
	}
	write(1, &"\n", 1);
	return (argc);
}
