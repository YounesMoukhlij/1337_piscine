/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 07:37:26 by tnard             #+#    #+#             */
/*   Updated: 2021/07/22 09:24:22 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;
	int	numeric;

	numeric = 1;
	n = 0;
	while (str[n])
	{
		if (str[n] >= 48 && str[n] <= 57)
			numeric = 1;
		else
			return (0);
		n++;
	}
	return (numeric);
}
