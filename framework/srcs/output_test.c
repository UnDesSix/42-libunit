/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 15:07:55 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 23:05:36 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

void	output_test(t_unit_test *lst)
{
	int	result;

	while (lst)
	{
		result = lst->success;
		pl_putstr("> ");
		pl_putstr(lst->name);
		pl_putstr(" : ");
		if (result == 1)
			pl_putendl("[OK]");
		else if (result == 3)
			pl_putendl("[SEGV]");
		else if (result == 4)
			pl_putendl("[BUSE]");
		else
			pl_putendl("[KO]");
		lst = lst->next;
		g_num_tests++;
	}
}
