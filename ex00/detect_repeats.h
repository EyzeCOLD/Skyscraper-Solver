/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_repeats.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:52:52 by juaho             #+#    #+#             */
/*   Updated: 2024/07/07 15:02:57 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETECT_REPEATS_H
# define DETECT_REPEATS_H

int	detect_repeats(int solution[4][4]);

int	detect_repeats_line(int solution[4][4], int n, char row_or_col);

#endif
