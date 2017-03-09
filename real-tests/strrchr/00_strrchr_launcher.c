/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strrchr_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:32:21 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 21:32:41 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strrchr_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRRCHR:");
	load_test(&lst, "Basic test", &strrchr_basic_test);
	load_test(&lst, "NULL test", &strrchr_null_test);
	load_test(&lst, "BUSE test", &strrchr_buse_test);
	return (launch_tests(&lst));
}
