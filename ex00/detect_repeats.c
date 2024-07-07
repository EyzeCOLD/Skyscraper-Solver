/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_repeats.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:32:41 by juaho             #+#    #+#             */
/*   Updated: 2024/07/07 16:10:19 by tpinarli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detect_repeats.h"

int	detect_repeats(int solution[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (detect_repeats_row(solution, i))
			return (1);
		if (detect_repeats_col(solution, i))
			return (1);
		i++;
	}
	return (0);
}

int	detect_repeats_row(int solution[4][4], int row)
{
	int	sum;
	int	product;
	int	i;

	sum = 0;
	product = 1;
	i = 0;
	while (i < 4)
	{
		sum += solution[row][i];
		product *= solution[row][i];
		i++;
	}
	if (sum != 10 || product != 24)
		return (1);
	return (0);
}

int	detect_repeats_col(int solution[4][4], int col)
{
	int	sum;
	int	product;
	int	i;

	sum = 0;
	product = 1;
	i = 0;
	while (i < 4)
	{
		sum += solution[i][col];
		product *= solution[col][i];
		i++;
	}
	if (sum != 10 || product != 24)
		return (1);
	return (0);
}
