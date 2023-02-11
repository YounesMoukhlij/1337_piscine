/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:25:03 by tnard             #+#    #+#             */
/*   Updated: 2021/07/22 12:48:05 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	main(int argc, char *argv[])
{
	int	n;

	n = 0;
	if (argc != 4)
		return (1);
	while (argv[2][n])
		n++;
	if ((argv[2][0] == '+' || argv[2][0] == '-'
		|| argv[2][0] == '/' || argv[2][0] == '*'
		|| argv[2][0] == '%') && n == 1)
	{
		ft_calc(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
