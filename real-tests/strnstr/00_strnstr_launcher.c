/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strnstr_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 22:13:23 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 22:13:46 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strnstr_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRNSTR:");
	load_test(&lst, "Basic test", &strnstr_basic_test);
	load_test(&lst, "NULL test", &strnstr_null_test);
	load_test(&lst, "BUSE test", &strnstr_buse_test);
	return (launch_tests(&lst));
}
