/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:55:27 by juaho             #+#    #+#             */
/*   Updated: 2024/07/06 15:09:56 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count_skyscrapers.h"

int	validate(int solution[4][4], int clues[4][4])
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (count_skyscrapers(solution, x + y) != clues[x][y])
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}
