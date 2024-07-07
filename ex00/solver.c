/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:37:49 by juaho             #+#    #+#             */
/*   Updated: 2024/07/07 20:08:45 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_solution(int arr[4][4], int rows_list[24][4], int row_comp[4])
{
	int	row;
	int	digit;

	row = 0;
	while (row < 4)
		row_comp[i] = 4 - i++;
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

void	next_solution(int arr[4][4], int rows_list[24][4], int row_comp[4])
{
	int	row;
	int	digit;

	row = 0;
	increment_row_comp(row_comp);
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
