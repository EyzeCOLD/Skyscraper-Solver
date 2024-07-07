/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_skyscrapers.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:36:48 by juaho             #+#    #+#             */
/*   Updated: 2024/07/07 22:10:55 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COUNT_SKYSCRAPERS_H
# define COUNT_SKYSCRAPERS_H

// count_skyscrapers takes in a whole solution array as its first parameter
// and as its second it takes a column/row selection as a number from 0-15;
// 0-3 for the views from the top row,
// 4-7 from the bottom,
// 8-11 from the left and 
// 12-15 from the right.

int	count_skyscrapers(int arr[4][4], int viewpoint);

int	count_up_down(int arr[4][4], int row);

int	count_down_up(int arr[4][4], int row);

int	count_left_right(int arr[4][4], int col);

int	count_right_left(int arr[4][4], int col);

#endif
