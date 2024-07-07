/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:37:49 by juaho             #+#    #+#             */
/*   Updated: 2024/07/07 21:47:23 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"

void	init_solution(int arr[4][4], int rows_list[24][4], int row_comp[4])
{
	int	row;
	int	digit;

	row = 0;
	while (row < 4)
	{
		row_comp[row] = 4 - row;
		row++;
	}
	row = 0;
	while (row < 4)
	{
		digit = 0;
		while (digit < 4)
		{
			arr[row][digit] = rows_list[row_comp[row]][digit];
			digit++;
		}
		row++;
	}
}

int	next_solution(int arr[4][4], int rows_list[24][4], int row_comp[4])
{
	int	row;
	int	digit;

	row = 0;
	if (increment_row_comp(row_comp) == -1)
		return (-1);
	while (row < 4)
	{
		digit = 0;
		while (digit < 4)
		{
			arr[row][digit] = rows_list[row_comp[row]][digit];
			digit++;
		}
		row++;
	}
	return (0);
}

int	increment_row_comp(int row_comp[4])
{
	row_comp[0]++;
	if (row_comp[0] > 23)
	{
		row_comp[0] = 0;
		row_comp[1]++;
		if (row_comp[1] > 23)
		{
			row_comp[1] = 0;
			row_comp[2]++;
			if (row_comp[2] > 23)
			{
				row_comp[2] = 0;
				row_comp[3]++;
				if (row_comp[3] > 23)
					return (-1);
			}
		}
	}
	return (0);
}
