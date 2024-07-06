/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:55:27 by juaho             #+#    #+#             */
/*   Updated: 2024/07/06 15:43:47 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count_skyscrapers.h"
#include <stdio.h>

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
			printf("checking view %d \n", x + 4 * y);
			if (count_skyscrapers(solution, y * 4 + x) != clues[y][x])
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}
