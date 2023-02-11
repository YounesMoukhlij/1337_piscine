/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 08:28:04 by tnard             #+#    #+#             */
/*   Updated: 2021/07/22 09:24:25 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;
	int	print;

	n = 0;
	print = 1;
	while (str[n])
	{
		if (str[n] >= 32 && str[n] <= 126)
			print = 1;
		else
			return (0);
		n++;
	}
	return (print);
}
