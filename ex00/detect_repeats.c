/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_repeats.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:32:41 by juaho             #+#    #+#             */
/*   Updated: 2024/07/07 15:41:08 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detect_repeats.h"

int detect_repeats(int solution[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (detect_repeats_line(solution, i, 'r'))
			return (1);
		if (detect_repeats_line(solution, i, 'c'))
			return (1);
		i++;
	}
	return (0);
}

int detect_repeats_line(int solution[4][4], int n, char row_or_col)
{
	int	sum;
	int	product;
	int	i;

	sum = 0;
	product = 1;
	i = 0;
	if (row_or_col == 'r')
	{
		while (i < 4)
		{
			sum += solution[n][i];
			product *= solution[n][i];
			i++;
		}
	}
	else if (row_or_col == 'c')
	{
		while (i < 4)
		{
			sum += solution[i][n];
			product *= solution[i][n];
			i++;
		}
	}
	if (sum != 10 || product != 24)
		return (1);
	return (0);
}

int	detect_repeats_row(int solution[4][4], int row)

int detect_repeats_col(int solution[4][4], int col)
