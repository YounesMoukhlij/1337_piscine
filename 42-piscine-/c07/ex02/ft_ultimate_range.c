/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 07:42:14 by tnard             #+#    #+#             */
/*   Updated: 2021/07/22 09:25:30 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;

	n = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int *) * (max - min));
	if (!*range)
		return (-1);
	while (min < max)
		(*range)[n++] = min++;
	return (n);
}
