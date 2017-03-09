/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:52:15 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 23:30:19 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

void	append_test(t_unit_test **alst, t_unit_test *new)
{
	if (!alst)
		return ;
	if (!new)
		return ;
	while (*alst)
	{
		if ((*alst)->next == NULL)
		{
			(*alst)->next = new;
			break ;
		}
		alst = &((*alst)->next);
	}
}

void	load_test(t_unit_test **alst, char *test_name, int (*func)(void))
{
	t_unit_test *lst;
	t_unit_test *begin_lst;

	lst = NULL;
	if (*alst == NULL)
	{
		*alst = (t_unit_test*)malloc(sizeof(t_unit_test));
		(*alst)->name = test_name;
		(*alst)->success = 0;
		(*alst)->func = func;
		(*alst)->next = NULL;
	}
	else
	{
		lst = (t_unit_test*)malloc(sizeof(t_unit_test));
		lst->name = test_name;
		lst->success = 0;
		lst->func = func;
		lst->next = NULL;
		begin_lst = *alst;
		append_test(alst, lst);
		*alst = begin_lst;
	}
}
