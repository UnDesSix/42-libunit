/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strncpy_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:05:56 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 20:06:17 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strncpy_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRNCPY:");
	load_test(&lst, "Basic test", &strncpy_basic_test);
	load_test(&lst, "NULL test", &strncpy_null_test);
	load_test(&lst, "BUSE test", &strncpy_buse_test);
	return (launch_tests(&lst));
}
