/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strncmp_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:45:12 by pluu              #+#    #+#             */
/*   Updated: 2017/02/14 20:45:33 by pluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int		strncmp_launcher(void)
{
	t_unit_test		*lst;

	lst = NULL;
	pl_putendl("STRNCMP:");
	load_test(&lst, "Basic test", &strncmp_basic_test);
	load_test(&lst, "NULL test", &strncmp_null_test);
	load_test(&lst, "BUSE test", &strncmp_buse_test);
	return (launch_tests(&lst));
}
