/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_repeats.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:52:52 by juaho             #+#    #+#             */
/*   Updated: 2024/07/07 18:13:37 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETECT_REPEATS_H
# define DETECT_REPEATS_H

int	detect_repeats(int solution[4][4]);

int	detect_repeats_row(int solution[4][4], int row);

int	detect_repeats_col(int solution[4][4], int col);

#endif
