/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:53:58 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 23:27:10 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

void	execute_test(t_unit_test *lst)
{
	pid_t	pid_1;
	int		status;

	pid_1 = fork();
	if (pid_1 < 0)
	{
		pl_putendl("fork() error");
		exit(-1);
	}
	if (pid_1 != 0)
	{
		if ((pid_1 = wait(&status)) >= 0)
		{
			if (status == 0)
				lst->success = 1;
			else if (status == -1)
				lst->success = 2;
			else if (status == 11)
				lst->success = 3;
			else if (status == 10)
				lst->success = 4;
		}
	}
	else
		exit(lst->func());
}

int		launch_tests(t_unit_test **alst)
{
	t_unit_test *begin_lst;
	int			success;

	success = 0;
	begin_lst = *alst;
	while (*alst)
	{
		execute_test(*alst);
		if ((*alst)->success == 1)
			success++;
		*alst = (*alst)->next;
	}
	*alst = begin_lst;
	output_test(*alst);
	return (success);
}
