/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:16:55 by tnard             #+#    #+#             */
/*   Updated: 2021/07/22 09:24:30 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(int num)
{
	char	*hexx;

	hexx = "0123456789abcdef";
	write(1, &hexx[num / 16], 1);
	write(1, &hexx[num % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			write(1, "\\", 1);
			hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
