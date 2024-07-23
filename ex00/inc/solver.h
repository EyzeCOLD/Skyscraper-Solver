/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinarli <tpinarli@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:22:35 by tpinarli          #+#    #+#             */
/*   Updated: 2024/07/07 21:21:31 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define  SOLVER_H

// Initializes the first solution proposal
void	init_solution(int arr[4][4], int rows_list[24][4], int row_comp[4]);

// Returns -1 if called at the last possible solution
int		next_solution(int arr[4][4], int rows_list[24][4], int row_comp[4]);

int		increment_row_comp(int row_comp[4]);

#endif
