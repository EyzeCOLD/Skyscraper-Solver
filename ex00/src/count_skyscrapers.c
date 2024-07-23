/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_skyscrapers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:51:43 by juaho             #+#    #+#             */
/*   Updated: 2024/07/07 15:25:15 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count_skyscrapers.h"

int	count_skyscrapers(int arr[4][4], int viewpoint)
{
	if (viewpoint >= 0 && viewpoint <= 3)
		return (count_up_down(arr, viewpoint % 4));
	if (viewpoint >= 4 && viewpoint <= 7)
		return (count_down_up(arr, viewpoint % 4));
	if (viewpoint >= 8 && viewpoint <= 11)
		return (count_left_right(arr, viewpoint % 4));
	if (viewpoint >= 12 && viewpoint <= 15)
		return (count_right_left(arr, viewpoint % 4));
	return (-1);
}

int	count_up_down(int arr[4][4], int row)
{
	int	max;
	int	sum;
	int	i;

	max = 0;
	sum = 0;
	i = 0;
	while (i < 4)
	{
		if (arr[i][row] > max)
		{
			max = arr[i][row];
			sum++;
		}
		i++;
	}
	return (sum);
}

int	count_down_up(int arr[4][4], int row)
{
	int	max;
	int	sum;
	int	i;

	max = 0;
	sum = 0;
	i = 3;
	while (i >= 0)
	{
		if (arr[i][row] > max)
		{
			max = arr[i][row];
			sum++;
		}
		i--;
	}
	return (sum);
}

int	count_left_right(int arr[4][4], int col)
{
	int	max;
	int	sum;
	int	i;

	max = 0;
	sum = 0;
	i = 0;
	while (i < 4)
	{
		if (arr[col][i] > max)
		{
			max = arr[col][i];
			sum++;
		}
		i++;
	}
	return (sum);
}

int	count_right_left(int arr[4][4], int col)
{
	int	max;
	int	sum;
	int	i;

	max = 0;
	sum = 0;
	i = 3;
	while (i >= 0)
	{
		if (arr[col][i] > max)
		{
			max = arr[col][i];
			sum++;
		}
		i--;
	}
	return (sum);
}
