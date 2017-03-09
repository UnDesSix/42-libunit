/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isdigit_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 22:40:48 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 22:41:03 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		isdigit_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("ISDIGIT:");
	load_test(&lst, "Basic test", &isdigit_basic_test);
	return (launch_tests(&lst));
}
